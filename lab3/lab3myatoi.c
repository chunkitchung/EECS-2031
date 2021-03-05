/***************************************
* EECS2031ON – Lab3 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include <stdio.h>
#include <stdlib.h> // for atoi
#include <string.h>

#define SIZE 10
int my_atoi(char[], int);
int value(char);

int main()
{
    int a, b;
    int base;
    char arr[SIZE];
    printf("Enter a word of positive number and base, or 'quit': ");
    scanf("%s %d", arr, &base);
    while (1)
    {
        if (isQuit(arr))
        {
            break;
        }
        printf("%s\n", arr);
        b = my_atoi(arr, base);
        printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b, b, b, b * 2, b * b);
        printf("\nEnter a word of positive number and base, or 'quit': ");
        scanf("%s %d", arr, &base);
    }
    return 0;
}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated 
 but more straightforward (IMHO) */
int value (char x){
    if (x >= '0' && x <= '9') {
        return (int)x - '0'; 
    }else{
        return (int)x - 'A' + 10; 
    }
}

int my_atoi(char c[], int base)
{
    int i;
    int num = 0;
    int increment = 1;
    int power = 1;
    for (i = strlen(c) - 1; i >= 0; i--)
    {
        num += value(c[i]) * power;
        power = power * base;
    }
    return num;
}
int isQuit(char arr[])
{
    if (arr[0] == 'q' && arr[1] == 'u' && arr[2] == 'i' && arr[3] == 't')
        return 1;
    else
        return 0;
}