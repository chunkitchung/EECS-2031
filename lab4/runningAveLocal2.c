/***************************************
* EECS2031ON – Lab4 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York num: 217125329
****************************************/

#include <stdio.h>

void r_avg(int);

int main(int argc, char *argv[])
{

    int input;
    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);

    while (input != -1)
    {
        r_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input);
    }

    return 0;
}

void r_avg(int input)
{
    static int count = 0;
    static int sum = 0;
    sum += input;
    count++;
    double resu = ((double)sum / count);
    printf("running average is %d / %d = %.3f", sum, count, resu);
}
