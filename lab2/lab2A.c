/***************************************
* EECS2031ON – Lab2 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include<stdio.h>
#include <stdbool.h>

#define SIZE 32

 bool isDigit(char);
 bool isLetter(char);

int main(){
    int integer; 
    char character;

    while(1){ // while true inifinte loop
	printf("Enter an integer and a character seperated by a blank: ");
    scanf("%d %c", &integer, &character);

	    if (integer == -10000){
	        break;
	    }
        if(isDigit(character) == 1){

            printf("Character '%c' represents a digit. Sum of %d and %c is %d\n\n", character, integer, character, integer + (character - '0'));
        }
        else if(isLetter(character) == 1){
            printf("Character '%c' represents a letter\n\n", character);            
        }
        else{
            printf("Character '%c' represents others\n\n", character);
        }
    }
     return 0;
}

bool isDigit(char c){
    if (c >='0' && c <= '9'){
        return 1;
    }
    return 0;
} 

bool isLetter(char c){
    if ((c >='A' && c <= 'Z') || (c >='a' && c <= 'z')){
        return 1;
    }
    return 0;
}
