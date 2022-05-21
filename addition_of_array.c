#include<stdio.h>


int main()
{
    int Arr[10],i=0;
    int n=0;
    int sum=0;

    printf("Enter your numbers addition\n");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter your number %d\n",i+1);
        scanf("%d",&Arr[i]);
        sum+=Arr[i];

    }
     
    printf("your sum is : %d",sum);
}