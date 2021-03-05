#include <stdio.h> // define EOF

/***************************************
* EECS2031ON – Lab1 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit *
* York Student #: 217125329
****************************************/

main(){
  int c;
  int count = 0;
  int line = 0;
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    count++;  
    if (c == '\n'){
        count--;
        line++;
    }
    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  printf("# of lines: %d\n",line);
}

