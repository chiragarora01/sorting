#include <stdio.h>
#include <stdlib.h>
    int arr[]={99,44,6,2,1,5,63,87,283,4,0};
    int i,j,temp,min;

int main()
{
   for(i=0;i<11;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    merge();
    return 0;
}
void bubble()
{
    for(j=0;j<11;j++)
    {
        for(i=0;i<11;i++)
        {
            if(arr[i]>arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
        }
    }
    for(i=0;i<11;i++)
    {
    printf("%d\t",arr[i]);
    }
}
void selection()
{
    for(i=0;i<11;i++)
    {
        min=i;
        temp=arr[i];
        for(j=i+1;j<11;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(i=0;i<11;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void insertion()
{
    for(i=1;i<11;i++)
    {
        temp=arr[i];
        j=i-1;
        while((arr[j]>temp))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<11;i++)
    {
        printf("%d\t",arr[i]);
    }


}
void merge()
{
    merge_divide(/*int arr[],*/0,10);
}
void merge_divide(/*int arr[],*/int start ,int end)
{
    if(start<end)
    {
        int middle=start+(end-start)/2;
        merge_divide(start,middle);
        merge_divide(middle+1,end);
        merge_conqure(start,middle,end);
    }
}
void merge_conqure(/*int arr[],*/int start,int middle ,int end)
{
    int n1=middle-start+1;
    int n2=end-middle;
    int i,j,k;
    int L[30],R[30];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[1+i];
    }
    for(j=0;i<n2;j++)
    {
        R[j]=arr[middle+j+1];
    }
    i=0;
    j=0;
    k=start;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        i++;
        k++;
    }
    for(k=0;k<11;k++)
    {
        printf("%d\t",arr[k]);
    }

}
void quick()
{

}





