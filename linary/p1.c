#include<stdio.h>
#define n 10
#include<stdlib.h>
int lin(int a[],int e)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(e==a[i])
			return i;
	}
	return -1;		
}
int main()
{
	int i,a[n],e;
	printf("array element:");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		printf("  %d  ",a[i]);
	}
	printf("\nenter search element:");
	scanf("%d",&e);
	int m=lin(a,e);
	if(m==-1)
			printf("not found");
	else
	{
		printf("array position number:%d",m);
	}
}