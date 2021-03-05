#include <stdio.h> 

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
  int countA = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
      count++;
    if (c == 'a'){
        countA++;
    }
    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  printf("# of char 'a': %d\n",countA);

}

