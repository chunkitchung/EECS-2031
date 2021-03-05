/***************************************
* EECS2031ON – Lab3 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include <stdio.h>

int isLeap(int);

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    while (1)
    {
        if (year < 0)
        {
            break;
        }

        if (isLeap(year))
        {
            printf("Year %d is a leap year", year);
        }
        else
        {
            printf("Year %d is not a leap year", year);
        }

        printf("\n\nEnter a year: ");
        scanf("%d", &year);
    }
    return 0;
}
int isLeap(int year)
{
   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}