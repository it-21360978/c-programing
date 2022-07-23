#include<stdio.h>

int main(){
 
 
 
}

// function implimentation
float calincreament(float salary ,  char catagary){
 
 float increamnet ;
 
  if(catagary == 'A'){
    
    increamnet = (salary * 4 / 100.0 );
    
    return increamnet ;
  }
  
  else if (catagary == 'B'){
    
    increamnet = (salary * 6 / 100.0 );
    
    return increamnet ;
  }
  catagary == 'C'){
    
    increamnet = (salary * 8 / 100.0 );
    
    return increamnet ;
  }
   else 
   printf("invalide input");
}