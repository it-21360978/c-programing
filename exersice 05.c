#include<stdio.h>

float area (float length , float width);
float add (float a , float b);
float subtract (float a , float b);

int main()
{
  float allArea;
  float garden1, garden2, totalGarden;
  float floorArea;
  
  allArea = area(15 , 9);
  
  garden1 = area(5 , 4.5);
  garden2 = area(4.5 , 3.5);
  totalGarden = add(garden1 , garden2);
  
  floorArea = subtract(allArea , totalGarden);
  
  printf("Floor Area = %.2f", floorArea);
  
  return 0;
}
 
float area (float length , float width)
{
  return length * width; 
}

float add (float a , float b)
{
  return a + b;
}

float subtract (float a , float b)
{
  return a - b;
}