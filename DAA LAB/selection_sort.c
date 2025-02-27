
#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int n,int *comp,int *swaps)
{
	int min,temp;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		temp = a[i];
		for(int j=i+1;j<n;j++)
		{
			(*comp)++;
			if(a[min]>a[j])
				min = j;
		}
		if(min!=i)
		{
			(*swaps)++;
			a[i] = a[min];
			a[min] = temp;
		}
	}
}

int main()
{
	int n,*a,swaps,comp,test;
	printf("Enter number of test cases: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{
		swaps = comp = 0;
		printf("Enter size of array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter the size of array:-\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
			
		sort(a,n,&comp,&swaps);
		printf("The sorted array is:-\n");
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		
		printf("\nComparisons = %d, Swaps = %d\n",comp,swaps);
		free(a);
	}
	return 0;
}
