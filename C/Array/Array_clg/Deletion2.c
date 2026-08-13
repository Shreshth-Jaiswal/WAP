#include<stdio.h>
int main()
{
    int n,x;
    
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

    printf("Enter the index until you want to delete: ");
    scanf("%d",&x);

    printf("\nOld Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+x];
    }
    
    printf("\nNew Array[]={");
    for(int i=0;i<n-x-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-x-1]);

    return 0;
}