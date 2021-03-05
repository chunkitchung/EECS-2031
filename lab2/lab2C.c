/***************************************
* EECS2031ON – Lab2 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include <stdio.h>
main()
{
    int c;
    c = getchar();
    int array[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (c != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            array[c - '0'] += 1;
        }
        c = getchar();
    }
    int i = 0;
    while(i<10){
        printf ("%d: %d\n", i, array[i]); 
        i++;
    }
    return 0;
}