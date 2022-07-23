#include<stdio.h>
#include<assert.h>
#include<math.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount()
{
 assert(fabs(findTotalAmount(1000.00, 10000.00) - 11000.00) < 0.01);
 assert(fabs(findTotalAmount(3750.00, 25000.00) - 28750.00) < 0.01);
}
int main()
{
 float rate, total;
 int i;
 
 printf("Enter Initial Amount to be invested : ");
 scanf("%f", &total);
 
 printf("Enter Annual interest Rate(in percentage) : ");
 scanf("%f", &rate); 
 
 testTotalAmount();
    
    puts("");
 for( i = 0; i < 5; ++i)
 {
  total = findTotalAmount(calcAnnualInterest(rate, total), total);
  printf("Amount after year %d : %.2f\n", i + 1, total);
 }
 
 return 0;
}
float calcAnnualInterest(float interestRate, float amount)
{
 return amount * interestRate / 100;
}
float findTotalAmount(float interestRate, float amount)
{
 return interestRate + amount;
}