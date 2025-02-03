#include <stdio.h>

int main()
{
    int a[100],n,key,f=0,pres,choice,low,high,mid;
    label:
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted elements in the array:-\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    do
    {
        printf("Enter key: ");
        scanf("%d",&key);
        pres=low=f=0;
        high=n-1;
        while(low<=high)
        {
            pres++;
            mid = low + (high-low)/2;
            if(a[mid]==key)
            {
                f=1;
                break;
            }
            if(a[mid]<key)
                low = mid+1;
            else
                high = mid-1;
        }
        if(f)
            printf("Present %d after %d comparisons\n",key,pres);
        else
            printf("Not Present %d\n",key);

        printf("Press 1 to enter another key: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Press 1 to input new array: ");
            scanf("%d",&choice);
            if(choice==1)
                goto label;
            else
                choice=1;
        }
    }
    while(choice==1);
    printf("End of program...");
    return 0;
}