#include<stdio.h>
void modifyArray(float A[]);

int main(void)
{
  int i;
  float x[5]={2,8,3,9,10};
  modifyArray(x);
  return 0;
  
}
void modifyArray(float A[])
{
  int i;
  for(i=0;i<=5;++i)
  {
    A[i]=A[i]*10.0/100;
    printf("%.2f\t",A[i]);
  }
}