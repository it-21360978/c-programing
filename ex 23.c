#include<stdio.h>


int main(){
 
 int  i   , alphebetCount = 0 , specialCount = 0 , digitsCount = 0 , spaceCount = 0   ; 
 
 char word[100] ;
 
 
 printf("Enter the word  :");
 gets(word);
 
  
  for( i = 0  ; word[i] !='\0' ; i++){
   
   if(word[i] >= '0' && word[i] <= '9'){
    digitsCount++;
    
   }
    else if((word[i] >= 'A' &&word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z')){
     
     alphebetCount++ ;
     
     
    }
     else if(word[i] == ' '){
      spaceCount++;
      
     }
     
     else{
      
      specialCount++ ;
     }
  }
  
  
  printf("\nTOTAL ALPHEBT IN THE STRING IS           :%d\n" , alphebetCount);
  printf("TOTAL DIGIT  IN THE STRING IS            :%d\n" , digitsCount);
  printf("TOTAL SPECIAL CHARACTER IN THE STRING IS :%d\n" , specialCount);
   
 
  
 
 return 0 ;
 }