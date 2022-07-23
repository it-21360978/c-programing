#include<stdio.h>

int main ()
{
 FILE *bank;
 
 bank=fopen("bank.dat","r");
 
 if(bank==NULL)
 {
  printf("\nbank.dat is can't open!'");
  return 0;
 }
 
 int i=0;
 int acntnum[5];
 char type[5];
 float amnt[5];
 float totwith=0;
 float totdep=0;
 
 fscanf(bank,"%d\t%c%f",&acntnum[i],&type[i],&amnt[i]);
 
 while(!feof(bank))
 {
  printf("%d\t%c\t%.2f\n",acntnum[i],type[i],amnt[i]);
  
  if(type[i]=='W')
  {
   totwith=totwith+amnt[i];
  }
  else if(type[i]=='D')
  {
   totdep=totdep+amnt[i];
  }
  
  i++;
  
  fscanf(bank,"%d\t%c%f",&acntnum[i],&type[i],&amnt[i]);
 
 }
 
 printf("\nTotal withdrawal : %.2f",totwith);
 printf("\nTotal deposits : %.2f",totdep);
 
 return 0;
}