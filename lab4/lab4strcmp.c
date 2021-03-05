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

int main()
{
   char a[SIZE];
   char b[SIZE];

   scanf("%s", a);
   scanf("%s", b);

   while (1)
   {
      if (strcmp(a, "xxx") == 0 && strcmp(b, "xxx") == 0)
      {
         break;
      }
      int resu = strcmp(a, b);
      if (resu < 0)
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a, b);
      else if (resu > 0)
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a, b);
      else
         printf("\"%s\" and \"%s\" are same\n", a, b);

      int resu2 = my_strcmp(a, b);
      if (resu2 < 0)
         printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a, b);
      else if (resu2 > 0)
         printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a, b);
      else
         printf("\"%s\" and \"%s\" are same\n\n", a, b);

      scanf("%s", a);
      scanf("%s", b);
   }
}

int my_strcmp(char a[], char b[])
{
   int i = 0;
   int compare = 0;
   while (a[i] != '\0' && b[i] != '\0')
   {
      if (a[i] < b[i])
      {
         return -1;
      }
      if (a[i] > b[i])
      {
         return 1;
      }
      i++;
   }
   if (a[i] == '\0' && b[i] != '\0')
   {
      return -1;
   }
   if (a[i] != '\0' && b[i] == '\0')
   {
      return 1;
   }

   return 0;
}
