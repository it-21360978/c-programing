#include<stdio.h>
int main(void)
{
  int distance;
  float discount=0;
  char type;
  
  printf("Enter vehicle type:");
  scanf("%c",&type);
  
  printf("Enter totaL distance:");
  scanf("%d",&distance);
  
  if(type== 'C')
  {
    if(distance>100)
    {
      discount=40*distance*5/100;
    }
  }
  else if(type== 'V')
  {
    if(distance>100)
    {
      discount=50*distance*5/100;
    }
  }
  else if(type== 'B')
  {
    discount=0;
  }
  else 
  {
    printf("Invalid input!");
    return -1;
  }
  printf("Discount is:%.2f\n",discount);
  return 0;
}