/***************************************
* EECS2031ON – Lab2 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/

#include <stdio.h>

//#include <math.h>

#include <string.h>
#define SIZE 30
int main(){
 

  int c;
  int state=0;
  float value = 0;
  
  float i2 = .1;

  //int met = 0;

  float resu[SIZE];
  int counter =0;
  while ((c=getchar()) != EOF){ 
    
   if (c == '.'){
    state = 1;  // enter decimal part
    continue;
   }
  
   if (c == ' ' || c == '\n')
   {   // current literal finish, store into array
       resu[counter++] = value;

       //reset states
        state = 0;
        value = 0; i2 = .1; 

        continue; 

   }  
   // else, read a digit
   if (state==0){
     value = value * 10 + c-'0';
   }
   else{
     value = value + (c-'0') * i2;
     i2 /= 10;
   }
  
  }

  printf("-------\n");
  int i;
  for(i=0; i< counter; i++)
    printf("%.4f\t%.4f\n", resu[i],resu[i] *2);
 
  return 0;
 
}