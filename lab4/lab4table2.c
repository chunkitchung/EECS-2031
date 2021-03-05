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
void removeNext(char input_table[]);
int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
     int current_row=0;
     char name[10]; int age; float rate; int i;
      
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // read into table directly. add a \n.  Don't change this line

     while(1)        
     {    
     /* may need to 'tokenize' the current input */       
        removeNext(input_table[current_row]);
        sscanf(input_table[current_row], "%s %d %f",name, &age, &rate);
        if (strcmp(name,"xxx")==0)
            break;
        
        for (i=0;i<strlen(name);i++){
             if (name[i] > 90)
                name[i]=name[i]-32;
        }
        current_row++;
        sprintf(input_table[current_row], "%s %d %.2f", name, age+10, rate*1.5);
        current_row++;

        printf("Enter name, age and rate: ");
        fgets(input_table[current_row], 30, stdin);   // read into table directly. add a \n.  Don't change this line
     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
      for(i=0; i<current_row; i++)
        printf("row[%d]: %s\n",i, input_table[i]) ;


     return 0;
}
void removeNext(char input_table[])
{
    int i=0;
    for (i=0; i< strlen(input_table); i++){
        if (input_table[i]=='\n')
        {
            input_table[i]='\0';
            break;
        }
    }
}