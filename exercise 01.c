
#include<stdio.h>

int main()
{
  int i;
  char itemCode[5] , description[20];
  float price;
  
  FILE* mPtr;
  mPtr = fopen("menu.dat" , "w");
  
  for (i = 0 ; i < 3 ; i++)
  {
    printf("Enter Item Code : ");
    scanf("%s" , itemCode);
    
    printf("Enter Description : ");
    scanf("%s" , description);
    
    printf("Enter Price : ");
    scanf("%f" , &price);
    
    fprintf(mPtr , "%s\t %s\t %.2f\n" , itemCode , description , price);
  }
  
  fclose(mPtr);
  
  mPtr = fopen("menu.dat" , "r");
  
  printf("Item Code\tDescription\tPrice\n");
  fscanf(mPtr , "%s%s%f" , itemCode , description , &price);
  while(!feof(mPtr))
  {
    printf("%s\t\t%s\t\t%.2f\n" , itemCode , description , price);
    fscanf(mPtr , "%s%s%f" , itemCode , description , &price);
  }
  
  fclose(mPtr);
  
  return 0;
}