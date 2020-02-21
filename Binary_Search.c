#include<stdio.h>

int binarysearch(int a[],int x,int low,int high)
{
    int mid;
    if(low>high)
    {    printf("Element Not Found\n");
        return -1;
    }

    mid=(low+high)/2;

    if(x==a[mid])
    {
        printf("The element is at position=%d\n",mid+1);
        return 0;
    }
    if(x<a[mid])
    {
        high=mid-1;
        binarysearch(a,x,low,high);
    }
    if(x>a[mid])
    {
        low=mid+1;
        binarysearch(a,x,low,high);
    }
}

int i_bsearch(int a[],int x,int low,int high)

{
    int mid,i=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x==a[mid])
        {
            printf("The element is at position=%d\n",mid+1);
            exit(-1);
        }
        if(x<a[mid])
            high=mid-1;
        if(x>a[mid])
            low=mid+1;
    }
    if(low>high)
    {
        printf("Element Not Found\n");
    }
}
void main()
{
    int index;

    int a[10],low,high,mid,val;

    printf("Elements in array\n");
    for(int i=0;i<10;i++)
    {
        a[i]=i+15;
        printf("%d\t",a[i]);
    }

    printf("\n\nEnter Element To Find=");
    scanf("%d",&val);

    printf("\n\nRecursive Method\n\n");
    index=binarysearch(a,val,0,9);

    printf("\n\nIterative Method\n\n");
    i_bsearch(a,val,0,10);
}
