/***************************************
* EECS2031ON – Lab2 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include <stdio.h>
#define SIZE 50 // assume no more than 50 literals in input
int main()
{

  int c, i;
  int value = 0;
  int resu[SIZE];
  int negative;
  int counter = 0;
  
  c = getchar();
  while (c != EOF)
  {

    if (c == '-'){ // if first input is negative
    
      negative = 1; // set true
    }

    else if (c == ' ' || c == '\n')
    { // if the character is a space or nextline

      if (negative == 1)
      {
        value = -1 * value;
      }
      resu[counter] = value;

      // resets value and negative and increments to the next index
      value = 0;
      negative = 0;
      counter++;
    }
    if (c >= '0' && c <= '9'){
      value = (value * 10) + (c - '0');
    }
    c = getchar(); // read next
  }

  printf("--------\n");

  for (i = 0; i < counter; i++)
  {
    printf("%d\t%d\n", resu[i], resu[i] * 2);
  }
  return 0;
}
