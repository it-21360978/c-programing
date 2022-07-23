#include <stdio.h>
#include <math.h>
struct point
{
  float x;
  float y;
}A,B;
 
int main ()
{
  float distance;
  A.x = 2;
  A.y = 3;
  
  B.x = 3;
  B.y = 2;
  
  distance = sqrt(pow((A.x - B.x),2) + pow((A.y + B.y),2));
    printf("Distance is %.2f\n",distance);
    
   return(0);
}