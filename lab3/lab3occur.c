/***************************************
* EECS2031ON – Lab3 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include <stdio.h>

#define MAX_SIZE 21
int length(char[]);
int indexOf(char[], char);
int occurrence(char[], char);
int isQuit(char[]);
int i = 0;
main()
{

    char word[MAX_SIZE];
    char c;
    
    char helloArr[] = "helloWorld";
    printf("\"%s\" contains %d characters, but the size is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
    helloArr[5] = '\0';
    helloArr[3] = 'X';
    helloArr[7] = 'Y';
    printf("\"%s\" contains %d characters, but the size is %d (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));

    /********** Fill in your code here. **********/

    printf("Enter a word and a character separated by blank: ");
    scanf("%s %c", word, &c);

    while (1)
    {
        if (isQuit(word))
        {
            break;
        }
        printf("\nInput word is \"%s\". Contains %d characters", word, length(word));
        printf("\n\'%c\' appears %d times in the word\n", c, occurrence(word, c));
        printf("Index of \'%c\' in the word is %d\n\n", c, indexOf(word, c));
        printf("Enter a word and a character separated by blank: ");
        scanf("%s %c", word, &c);
    }
    return 0;
}

int length(char arr[])
{
    int charCount = 0;

    for (i = 0; arr[i] != '\0'; i++)
    {
        charCount++;
    }
    return charCount;
}

int indexOf(char arr[], char c)
{
    int index = 0;
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == c)
        {
            index = i;
            return index;
        }
    }
    return -1;
}

int occurrence(char arr[], char c)
{
    int counter = 0;
    for (i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == c)
        {
            counter++;
        }
    }
    if (counter > 0)
    {
        return counter;
    }
    return counter;
}

int isQuit(char arr[])
{
    if (arr[0] == 'q' && arr[1] == 'u' && arr[2] == 'i' && arr[3] == 't')
        return 1;
    else
        return 0;
}
