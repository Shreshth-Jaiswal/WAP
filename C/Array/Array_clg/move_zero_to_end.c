#include<stdio.h>
void main()
{
    int n,temp=0;
    
    printf("Enter the no. elements you wanna enter:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOld Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0 && i!=0)
        {
            temp=arr[i];
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
    }

    printf("\nNew Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
}