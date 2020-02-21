#include<stdio.h>

int exp1(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	int r=exp1(x,n/2);
	if(n%2==0)
	{
		return r*r;
	}
	else
	{
		return r*r*x;
	}
}
int exponential(int x,int n)
{
	int temp=1;
	for(int i=0;i<n;i++)
	{
		temp=temp*x;
	}
	return temp;
}
int main()
{
    int base,power;
    printf("Enter Base Value=");
    scanf("%d",&base);
    printf("Enter Power Value=");
    scanf("%d",&power);

	int ans=exp1(base,power);
	printf("By Using Algorithm=%d\n",ans);

	ans=exponential(base,power);
	printf("By Using Normally=%d",ans);
	return 0;
}
