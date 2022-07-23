#include<stdio.h>

int main ()
{
  int att[5][5] = {{1 , 0 , 1 , 1 , 1} , {1 , 1 , 1 , 1 , 1} , {1 , 1 , 0 , 1 , 1} , {1 , 1 , 1 , 1 , 1} , {1 , 1 , 1 , 1 , 0}};
  int i , j , total = 0;
  
  printf("Students who have attended all 5 classes : ");
  for (i = 0 ; i < 5 ; i++)
  {
    total = 0;
    for (j = 0 ; j < 5 ; j++)
    {
      if (att[i][j] == 1)
      {
        total++;
      }
    }
    if (total == 5)
    {
      printf("%d , " , i + 1);
    }
  }
  
  return 0;
}