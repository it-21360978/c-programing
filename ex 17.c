#include <stdio.h>
# define SIZE
int main()
{
char type[10];
char name[30];
int i, cCount=0, sCount=0, tCount=0;



    FILE *cfPtr;
    cfPtr = fopen("appointment.dat", "w" );
if (cfPtr == NULL)
{
  printf("File cannot be open");
    return -1;
}
fprintf(cfPtr, "%s\t\t %s\n\n", "Appointment type", "Number of patient");
for(i = 0; i < 5; ++i)
{
   
    printf("Pls input the name:");
    scanf("%s", name);
    printf("Pls input the appointment type:");
    scanf("%s",type);
   
    fprintf(cfPtr, "%s\t\t\t\t  %s\n", name, type);
}
fclose(cfPtr);

    cfPtr = fopen("appointment.dat", "r" );
if (cfPtr == NULL)
{
  printf("File cannot be open");
    return -1;
}
printf ("Appointment Type       Number of patients\n");
while (!feof(cfPtr))
     {
       
          fscanf(cfPtr,"%c",&type[i]);
          if (type[i] == 'C'){
            cCount+=1;
           }

          else if (type[i] == 'S'){
            sCount+=1;
           }
          else if (type[i] == 'T'){
            tCount +=1;
           }