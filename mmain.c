#include<stdio.h>
 extern int Addition (int no1,int no2);
 extern int Substraction(int no1,int no2);
 extern int Multiplication(int no1,int no2);
 extern int Division(int no1,int no2);
int main()
{
    printf("inside main\n");
    int A=12;
    int B=10;
    int ret=0;
    int rat=0;
    int cat=0;
    int mat=0;
   
    ret=Addition(A,B);
    printf("your addition is %d\n",ret);
   
    rat=Substraction(A,B);
    printf("your substraction is %d\n",rat);
    
    cat=Multiplication(A,B);
    printf("your multiplication is %d\n",cat);
  
    mat=Division(A,B);
    printf("your division is %d\n",mat);
   
    return 0;
}