//program to display find even number using array
#include<stdio.h>


int main()
{

  int Arr[10]={11,23,44,55,12,34,56,77,98,89};
  int i=0,sum=0; 
    
  while(i<10)
  {
    if (Arr[i]%2==0)
    {
      printf(" %d ",Arr[i]);
    }
    i++;             
  }    
   return 0;
}
