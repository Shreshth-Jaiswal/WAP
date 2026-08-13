#include <stdio.h>
#include <stdlib.h>

int compare(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}

int main()
{
    int n,temp=1;
    
    printf("Enter the no. elements you wanna enter in the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,sizeof(int),compare);

    for(int i=0;i<n;i++)
    {
        if(temp!=arr[i])
        {
            for(int j=0;;j++)
            {
                if(temp==arr[i])
                break;
                printf("%d,",temp);
                temp++;
                
            }
            
        }
        temp++;
    }
}