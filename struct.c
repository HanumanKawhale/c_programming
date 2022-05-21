#include<stdio.h>

struct Demo
{
    int i;
    int j;
};

struct Hello
{
    float f;
    int no;
    struct Demo dobj;
};

int main()
{
    struct Hello hobj;

    hobj.f=0.0;
    hobj.no=0;
    hobj.dobj.i=21;
    hobj.dobj.j=51;
    printf("your value:");
    scanf("%f",hobj.f);

    printf("your no:");
    scanf("%d",hobj.no);

    return 0;
}