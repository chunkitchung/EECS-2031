/***************************************
* EECS2031ON – Lab3 *
* Author: Chung, Chun-Kit *
* Email: chunkit@my.yorku.ca *
* eecs_username: chunkit*
* York Student #: 217125329
****************************************/
#include <stdio.h>

float fun_IF(int, char, float);
float fun_II(int, char, int);
float fun_FF(float, char, float);

main()
{

    int op1;
    float op2;
    char operator;
    float resu, resu2, resu3;

    float a = 9 / 2;
    float b = 9 * 1.0 / 2;    // force 9 to be converted before /
    float c = 9 / 2 * 1.0;    // force 2 to be converted before /, but not working
    float c2 = 9 / (2 * 1.0); // force 2 to be converted before /
    float d = (float)9 / 2;   // cast 9 before /
    float e = 9 / (float)2;   // cast 2 before /
    float f = (float)(9 / 2); // cast after /, not working
    printf("9/2=%f  9*1.0/2=%f  9/2*1.0=%f   9/(2*1.0)=%f\n\n", a, b, c, c2);
    printf("(float)9/2=%f  9/(float)2=%f  (float)(9/2)=%f\n\n", d, e, f);

    // conversion in arithemetic
    printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n\n", 3.0 * 9 / 2 / 4, 9 / 2 * 3.0 / 4, 9 / 2 * 3.0 / 4);

    // conversion in assignment
    float f2 = 3.96;
    float f3 = 3.03;
    int i = f2;
    int j = f3;
    printf("i: %d  j: %d\n", i, j);

    //---------------------------------------
    // .....
    printf("Enter operand_1 operator operand_2 separated by blanks> ");
    scanf("%d %c %f", &op1, &operator, & op2);
    while (1)
    {
        if (op1 == -1 && op2 == -1)
        {
            break;
        }
        printf("Your input '%d %c %.6f' result in\n", op1, operator, op2);
        printf("%f (fun_IF)\n", fun_IF(op1, operator, op2));
        printf("%f (fun_II)\n", fun_II(op1, operator, op2));
        printf("%f (fun_FF)\n", fun_FF(op1, operator, op2));

        printf("\nEnter operand_1 operator operand_2 separated by blanks> ");
        scanf("%d %c %f", &op1, &operator, & op2);
    }
}

float fun_IF(int op1, char operator, float op2)
{
    float answer;
    if (operator== '+')
    {
        answer = op1 + op2;
    }
    else if (operator== '-')
    {
        answer = op1 - op2;
    }
    else if (operator== '*')
    {
        answer = op1 * op2;
    }
    else if (operator== '/')
    {
        answer = op1 / op2;
    }
    return answer;
}

float fun_II(int op1, char operator, int op2)
{
    float answer;
    if (operator== '+')
    {
        answer = op1 + op2;
    }
    else if (operator== '-')
    {
        answer = op1 - op2;
    }
    else if (operator== '*')
    {
        answer = op1 * op2;
    }
    else if (operator== '/')
    {
        answer = op1 / op2;
    }
    return answer;
}

float fun_FF(float op1, char operator, float op2)
{
    float answer;
    if (operator== '+')
    {
        answer = op1 + op2;
    }
    else if (operator== '-')
    {
        answer = op1 - op2;
    }
    else if (operator== '*')
    {
        answer = op1 * op2;
    }
    else if (operator== '/')
    {
        answer = op1 / op2;
    }
    return answer;
}
/*
The reason why fun-IF and fun-FF are same but both are different from fun-II is 
because when the function is called with the arguments, they will be converted 
to the coressponding types. When fun_FF is call with the first argument being an 
int, it will be converted into a float because the parameters the function takes 
are float values. This conversion also happens with fun_II which is why there is 
no decimal values after the decimal point.
*/