#include<stdio.h>
#include<string.h>

void convertToUpperCase(char a[], int size);

int main()
{
 char address[50];
 strcpy(address, "SLIIT, New Kandy Road, Malabe");
 
 convertToUpperCase(address, strlen(address));
 return 0;
}

void convertToUpperCase(char a[], int size){
 int i;
 for(i = 0; i < size; i++){
  if(a[i] >= 97 && a[i] <= 122){
   printf("%c", a[i] - 32);
  }else{
   printf("%c", a[i]);
  }
 }
}