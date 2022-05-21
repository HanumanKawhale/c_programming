#include<stdio.h>


int main()
{
    char cValue='M';
    char *cptr=&cValue;
    printf("the value of cptr %c\n",*cptr);
    printf("the addess of cvalue %d\n", cptr);
    printf("the value of cvalue %c\n ", cValue);
    printf("the size of cValue %d\n",sizeof(cValue));
    
    int iValue=21;
    int *iptr=&iValue;
    printf("the value of iptr %d\n",iptr);
    printf("the address of iValue %d\n",iptr);
    printf("the size of iValue %d\n",sizeof(iValue));
    printf("the size of *iptr %d\n",sizeof(iptr));

    return 0;
}