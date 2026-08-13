#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the no. elements you wanna enter:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

    if(n<1)
    return 0;

    printf("\nOld Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

    int min=arr[0],min_index=0;
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            min_index=i;
        }
    }

    if(min_index>0)
    {
        for(int i=min_index;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    n--;
    
    printf("\nNew Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

    return 0;
}