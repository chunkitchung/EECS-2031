#include <stdio.h>

// define global variables and a function
int count = 0;
int sum = 0;

void r_avg(void)
{
    double resu = ((double)sum / count);
    printf("running average is %d / %d = %.3f", sum, count, resu);
}
