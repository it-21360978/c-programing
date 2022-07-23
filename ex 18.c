#include<stdio.h>

int main(void)
{
 int marks[10]={80,30,23,78,98,47,39,40,80,89};
 int i,flag;
 
 printf("if the marks are ");
 for(i=0; i<10; i++){
 if(marks[i]>=0 && marks[i]<=100){
  flag=1;
 }
 if(marks[i]<0 || marks[i]>100){
  flag=0;
  break;
 }
 }
 for(i=0; i<10; i++){
  printf("%d," ,marks[i]);
 }
 if(flag==0){
  printf(" then not valid");
 }
 else if (flag==1){
  printf(" then valid");
 }
}