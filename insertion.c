#include<stdio.h>
#include<stdlib.h>
int insertion_sort(int a[],int n,int* comparisons,int* shifts)
{	
	int j=0,temp;
	for(int i=1;i<n;i++)
	{
		j=i-1;
		temp = a[i];
		while(j>=0 && a[j]>temp && (*comparisons)++)
		{
			
			(*shifts)++;
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
		(*shifts)++;
	}
	(*comparisons)--;
}

int main()
{
	int n,test,*a,c,s;
	printf("Enter number of tests: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{	
		c = 1;
		s = 0;
		printf("\nEnter size of the array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter elements in the array:-\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		insertion_sort(a,n,&c,&s);
		printf("The sorted array is:-\n");
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\nComparisons = %d\nShifts = %d\n\n",c,s);
		free(a);
	}
	return 0;
}
			
