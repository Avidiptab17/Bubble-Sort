#include <stdio.h>
void main()
{
    int a[10],n,i,j,temp;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the array");
        scanf("%d",&a[i]);
    }
    printf("The array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++);
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            printf("After Sorting");
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
