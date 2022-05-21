//this program is give your number is even or odd

#include<stdio.h>
int CheckEven( int no);
int main()
{   
    int value=0;
    int ret=0;
    printf("enter your number : ");
    scanf("%d",&value);

    ret=CheckEven(value);
    return 0;
}

int CheckEven(int no)
{
    int output=0;
    if (no%2==0)
    {
        printf("your number is even");
    }
    else
    {
        printf("your number is odd");    
    }
   
}
