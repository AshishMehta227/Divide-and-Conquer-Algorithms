#include<stdio.h>
void quicksort(int a[],int p,int r);


void main()
{

    int A[]={5,1,2,7,59,13,61,18,70,15};

    printf("Elements in array\n");

    for(int i=0;i<10;i++)
        printf("%d\t",A[i]);

    printf("\nThe starting index is pivot element\n");

    quicksort(A,0,9);

    printf("\nSorted Elements\n");
    for(int i=0;i<10;i++)
        printf("%d\t",A[i]);

}

void quicksort(int a[],int p,int r)
{
    int pivot,i,j,temp;
    if(p<r)
    {
        pivot=p;
        i=p+1;
        j=r;

        checkagain:
        while(a[i]<=a[pivot])
            i++;

        while(a[j]>a[pivot])
            j--;

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

        if(j>i)
            goto checkagain;

         temp=a[j];
         a[j]=a[pivot];
         a[pivot]=temp;

         quicksort(a,p,j-1);
         quicksort(a,j+1,r);

    }
}
