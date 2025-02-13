#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int linearsearch(int[],int,int,int,int,int*);
int jumpsearch(int[],int,int,int*);
		
int main()
{
	int *a,n,test,key,count=0;
	printf("Enter number of test cases: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{
		printf("Enter size of the array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter sorted elements in the array:-\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("Enter element to be searched: ");
		scanf("%d",&key);
		if(jumpsearch(a,n,key,&count))
			printf("Present in the array: %d\n",count);
		else
			printf("Not present in the array: %d\n",count);
			
		free(a);
	}
	return 0;
}

int linearsearch(int a[],int n,int key,int start,int end,int* count)
{
	int f=0;
	for(int i=start+1;i<end;i++)
	{
		(*count)++;
		if(a[i]==key)
		{
			f++;
			break;
		}
	}
	return f;
}

int jumpsearch(int a[],int n,int key,int * count)
{
	int f=0,p=0,i=0,prev=0;
	while(prev<n)
	{	
		(*count)++;	
		p = pow(2,i++);
		if(p>=n)
			f=linearsearch(a,n,key,prev,n,count);
		else if(a[p]==key)
		{
			f=1;
			break;
		}
		else if(a[p]>key)
		{
			if(f = linearsearch(a,n,key,prev,p,count))
				break;
		}
		prev = p;
	}
	return f;
}
