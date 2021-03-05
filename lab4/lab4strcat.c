/***************************************
* EECS2031ON – Lab4 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York num: 217125329
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 30

void my_strcat(char[], char[]);

int main()
{
   char a[SIZE];
   char b[SIZE];
   char c[SIZE];
   char d[SIZE];

   scanf("%s", a);
   scanf("%s", b);
   while ((strcmp(a,"xxx") != 0 || strcmp(b,"xxx") != 0) && strcmp(a, b) != 0)
   {

      strcpy(c, a);
      strcpy(d, b);

      strcat(a, b);
      my_strcat(c, d);

      printf("strcat:   %s\n", a);
      printf("mystrcat: %s\n\n", c);
      scanf("%s", a);
      scanf("%s", b);
   }
}

void my_strcat(char a[], char b[])
{
   int i = 0;
   int j = strlen(a);
   while (b[i] != '\0')
   {
      a[j] = b[i];
      i++;
      j++;
   }
   a[j] = '\0';
}
