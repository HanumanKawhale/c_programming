#include<stdio.h>

extern int no;  // Declaration of variable 
                // no is initialise in second.c

int main()
{
    printf("%d\n",no);

    return 0;
}

