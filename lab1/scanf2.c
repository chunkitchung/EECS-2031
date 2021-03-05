#include <stdio.h>

/***************************************
* EECS2031ON – Lab1 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York Student #: 217125329
****************************************/

int sum (int i, int j)
{
  return i+j;           
}


main()
{
  int a, b;
  printf("Please enter two integers separated by <><><>: " );
 
  scanf( "%d<><><>%d",  &a, &b);     /* assign value to a b  */
 
  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}

