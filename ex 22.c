#include<stdio.h>
int main()
{
 char ledPanel[4][4] = {0};
 int i, j;
 
 for(i = 0; i < 4; i++)
 {
  printf("LED Panel Colours of Row Number %d\n", i + 1);
  for(j = 0; j < 4; j++)
  {
   printf("Enter the colour of the LED bulb in Column %d : ", j +1);
   scanf(" %c", &ledPanel[i][j]);
  }
  puts("");
 }
 
 puts("");
 
 printf("Red LED bulb positions\n");
 
 for(i = 0; i < 4; i++)
 {
  for(j = 0; j < 4; j++)
  {
   if(ledPanel[i][j] == 'R')
   {
    printf("[%d, %d]  ", i, j);
   }
   else
   {
    continue;
   }
  }
 }
 
 return 0;
}