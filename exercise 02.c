#include<stdio.h>

int main()
{
  int i , quantity;
  float price;
  char code[5] , name[10];
  
  FILE* iPtr;
  iPtr = fopen("item.dat" , "a");
  
  for(i = 0; i < 5 ; i++)
  {
    printf("Enter Item Code : ");
    scanf("%s" , code);
    
    printf("Enter Name : ");
    scanf("%s" , name);
    
    printf("Enter Price : ");
    scanf("%f" , &price);
    
    printf("Enter Quantity : ");
    scanf("%d" , &quantity);
    
    fprintf(iPtr , "%s\t%s\t%.2f\t%d\n" , code , name , price , quantity);
    printf("\n");
  }
  
  fclose(iPtr);
  
  return 0;
}