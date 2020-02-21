#include<stdio.h>

void mergesort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);

    }
}

void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1,i,j;
    int n2=r-q;
    int l[n1+1],R[n2+1];

    for(i=0;i<n1;i++)
        l[i]=a[p+i];
    for(j=0;j<n2;j++)
        R[j]=a[q+1+j];

    l[i]=99999;
    R[j]=99999;
    i=0;
    j=0;

    for(int k=p;k<=r;k++)
    {
        if(l[i]<=R[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}
void main()
{
    int a[]={5,68,1,2,7,9,61,69,70,15};

    printf("Elements in array\n");
    for(int i=0;i<10;i++)
        printf("%d\t",a[i]);

    printf("\n\nSorted Array\n");
    mergesort(a,0,9);

     for(int i=0;i<10;i++)
            printf("%d\t",a[i]);
}
