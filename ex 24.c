#include<stdio.h>

#define SIZE 2

int main()
{  
    char empNO[10];
    char Name[20];
    int attenStatus[2][7],total=0;
    int i,j,input;
    
 FILE*attendance;
 attendance=fopen("attendance.dat","w");
 
 for(i=0;i<SIZE;i++)
 {
  printf("enter employee No :",i+1);
  scanf("%s",&empNO);
  
  printf("enter employee Name :",i+1);
  scanf("%s",& Name);
  
  fprintf(attendance,"%s\t%s\t",empNO,Name);
  
  for (j=0;j<7;j++)
  {
      printf("Enter day %d attendance Status :",j+1);
      scanf("%d",&attenStatus[i][j]);
      fprintf(attendance," %d",attenStatus[i][j]);
     }
     puts("");
     fprintf(attendance,"\n");
     
    }   
    fclose(attendance);
 
 attendance=fopen("attendance.dat","a+");
 
 printf("Enter a number :");
 scanf("%d",&input);
 
 printf("Total student %d attendance is = " , i);
 
 for (i=input;i==input;i++)
 {
  for (j=0;j<7;j++)
  {
      total += attenStatus[i-1][j];
     }
 }
 printf("%d" , total);
    
}