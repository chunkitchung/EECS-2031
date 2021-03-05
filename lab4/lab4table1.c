/***************************************
* EECS2031ON – Lab4 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York num: 217125329
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table[ROWS][COLUMNS];
    char name[10];
    char ageS[10];
    char rateS[10];

    int i = 0;
    int j;
    float rate;
    char newName[10];
    char newAge[10];
    char newRate[10];

    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS);

    while (strcmp(name, "xxx") != 0)
    {
        if (strcmp(name, "xxx"))
        {
            strcpy(inputs_table[i], name);
            strcat(strcat(inputs_table[i], " "), ageS);
            strcat(strcat(inputs_table[i], " "), rateS);
            i++;
            for (j = 0; name[j] != '\0'; j++)
            {
                if (name[j] >= 'a' && name[j] <= 'z')
                {
                    newName[j] = name[j] - 32;
                }
                else
                {
                    newName[j] = name[j];
                }
            }

            int age = atoi(ageS) + 10;
            sprintf(newAge, "%d", age);

            rate = atof(rateS) + (atof(rateS)/2);
            sprintf(newRate, "%0.2f", rate);

            strcpy(inputs_table[i], newName);
            strcat(strcat(inputs_table[i], " "), newAge);
            strcat(strcat(inputs_table[i], " "), newRate);
            i++;
        }

        /* read again using scanf(%s %s %s) */
        printf("Enter name, age and rate: ");
        scanf("%s %s  %s", name, ageS, rateS);
    }

    printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);

    /* now display the input_table row by row */
    for (j = 0; j < i; j++)
    {
        printf("row[%d]: %s\n", j, inputs_table[j]);
    }

    return 0;
}
