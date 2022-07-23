#include<stdio.h>

int main ()
{
  int num[5] = {2 , 5 , 8 , 4 , 9};
  int i , mid , no = 0;
  
  for (i = 0 ; i < 2 ; i++)
  {
    mid = num[i];
    num[i] = num[4 - no]; 
    num[4 - no] = mid;
    no++;
    //printf("%d\n" , mid);
  }
  
  for (i = 0 ; i < 5 ; i++)
  {
    printf("%d " , num[i]);
  }
  
  return 0;
}