#include<stdio.h>
#include<stdlib.h>

void duplicate_finder(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int a[],int low,int high)
{
	int pivot = a[high];
	int i = low-1;
	for(int j=low;j<high;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return i+1;
}

void quick_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi = partition(a,low,high);
		quick_sort(a,low,pi-1);
		quick_sort(a,pi+1,high);
	}
} 

int main()
{
	int n,*a,test;
	printf("Enter number of test cases: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{
		printf("Enter size of array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter the size of array:-\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		quick_sort(a,0,n-1);	
		duplicate_finder(a,n);
		free(a);
	}
	return 0;
}
