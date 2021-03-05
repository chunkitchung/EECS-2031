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
    while (c != EOF){
        if (c >= 'a' && c <= 'z'){
            c = c - 32;
        }
        putchar(c);
        c = getchar(); 
    }
}