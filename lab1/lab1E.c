#include <stdio.h>

/***************************************
* EECS2031ON – Lab1 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York Student #: 217125329
****************************************/

float sum (float, float);
void greet (int);

int main()
{  
   int a = 2031;
   greet(a);
   int interactions;
   float x,y;
   int i = 0;
   printf("Enter the number of interactions: " );
   scanf("%d", &interactions);
    
   while(i<interactions){
        printf("Enter two float numbers separated by ##: " );
        scanf( "%f##%f",  &x, &y);  
        float su= sum(x,y);
        printf( "%.3f + %.3f = %f (%.2f)\n", x,y, su, su);
        i++;
   }
  
   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}

void greet(int i){
   printf("Hello %d!\n", i);
}
