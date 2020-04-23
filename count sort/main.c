#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=arr[0];
    int count[50],b[50],i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
     for(i=0;i<n;i++)
       {
           if(arr[i]>k);
            k=arr[i];
       }
    printf("\n1\n");
    for(i=0;i<=n;i++)
    {
        count[i]=0;
    }
     printf("\n1\n");

    for(i=0;i<n;i++)
    {
        ++count[arr[i]];
    }
    printf("\n1\n");
    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    printf("\n1\n");
    for(i=n-1;i>=0;i--)
    {
        b[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    printf("\n1\n");
    for(i=0;i<n;i++)
        arr[i]=b[i];
    printf("\n1\n");
     for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

    return 0;
}
