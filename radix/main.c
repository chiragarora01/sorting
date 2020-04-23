#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={432,8,530,90,88,231,11,45,677,199};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
     printed(arr,n);
    radix(arr,n);
    printed(arr,n);
    return 0;
}
void radix(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }

    for(int pos=1;max/pos>0;pos*=10)//ones tens hund
    {
        count_sort(arr,n,pos);
    }

}
void count_sort(int arr[],int n,int pos)
{
    int count[15];
    int i;
    int b[15];
     for(i=0;i<n;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for(i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[count[(arr[i]/pos)%10]-1]=arr[i];
        count[(arr[i] / pos) % 10]--;
    }
    for(i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
}
void printed(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
