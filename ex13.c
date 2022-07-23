# include <stdio.h>
float circleArea(float radius);
float PI = 3.14;
int main(void)
{
  float radius;
    
  printf("Input the radius : ",radius);//prompt
  scanf("%f",&radius);// read the input value 
  

  printf(" circle area is : %.2f",circleArea(radius ));// print the area
  return 0;
  
}
/* return area of a circle */
  
  float circleArea(float radius){
  return PI * radius * radius;
}