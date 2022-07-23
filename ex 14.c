#include<stdio.h>
int qualityPoints(float average);
int main ()
{
  float average;
  int answer;
  
  printf("Enter student average :");
  scanf("%f",&average);
  
  answer = qualityPoints(average);
  printf("%d",answer);
  
  return 0;
}
int qualityPoints(float average)
{
     int answer;
     
   if(average <= 60.0)
    answer = 0;
  else if(average <= 69.0)
    answer = 1;
  else if(average <= 79.0)
    answer = 2;
  else if(average <= 89.0)
    answer = 3;    
  else if(average <= 100.0)
    answer = 4;
  else
    answer = 0;
  
  return answer;
}