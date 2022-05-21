#include<stdio.h>
#pragma pack(1) //allocated memory in form of 1byte

struct Demo
{
    int i;
    char ch;
    char chh;
    float f;
    int j;
    double d;
    char chhhh;
};
int main()
{
    printf("%d\n",sizeof(struct Demo));// padding
    return 0;
}