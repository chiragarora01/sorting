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
    insertion();
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


}
