int main()
{
    int arr[] = {99,44,6,2,1,5,63,87,283,4,0};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printArray(arr, arr_size);
    return 0;
}


void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start+(end-start)/2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }
}
void merge(int arr[], int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 =  end - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
     L[i] = arr[start + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];

       i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d \t", A[i]);
    printf("\n");
}


