/***************************************
* EECS2031ON – Lab4 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York num: 217125329
****************************************/
#include <stdio.h>
extern void r_avg(void);

extern int count;
extern int sum;

    int main(int argc, char *argv[])
{
  int input;

  printf("Enter number (-1 to quit): ");
  scanf("%d", &input);

  while (input != -1)
  {

        sum+= input;
        count++;
        r_avg();

    // read again
    printf("\n\nEnter number (-1 to quit):  ");
    scanf("%d", &input);
  }

  return 0;
}
