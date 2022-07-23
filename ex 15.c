#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void)
{
 // use initializer list to initialize array n
int a[SIZE] = {19, 3, 15, 7, 11,9,13,5,17,1};
int i,j;
printf("%s%13s%13s\n", "Element", "Value", "Histogram");

// for each element of array n, output a bar of the histogram
for(i=0; i<SIZE; ++i)
{
  printf("%7u%11d\t",i,a[i]);  
  for(j=1; j<=a[i]; ++j)// print one bar
  {
    printf("%c",'*');
  }
  puts("");
}