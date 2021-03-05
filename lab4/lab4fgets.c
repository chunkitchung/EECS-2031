/***************************************
* EECS2031ON – Lab4 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York num: 217125329
****************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{
  char resu[SIZE2];
  char input[SIZE2];
  char name[SIZE];

  int age;
  int fl;
  int ceiling;
  float rate;
  printf("Enter name, age and rate (or \"exit\"): ");
  fgets(input, SIZE2, stdin);
  while (strcmp(input, "exit\n") != 0)
    {
      sscanf(input, "%s %d %f", name, &age, &rate);
      fputs(input, stdout);
      //output original input using two functions.
      printf("%s", input); // no \n needed

      if (name[0] >= 97 && name[0] <= 122)
      {
        name[0] -= 32;
      }
      age += 10;
      rate *= 2;
      fl = floor(rate);
      ceiling = ceil(rate);
      sprintf(resu, "%s-%d-%0.3f-[%d,%d]", name, age, rate, fl, ceiling);
      printf("%s", resu);

      /* use fgets to read again */
      printf("\n\nEnter name, age and rate (or \"exit\"): ");
      fgets(input, SIZE2, stdin);
    }
  return 0;
}
