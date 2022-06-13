#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float input1, input2, answer;
    char operator[1];

    printf("type expression: \n");

    scanf("%f %s %f", &input1, &operator,  &input2); // space needed between inputs

    //printf("%s", operator);
    switch (operator[0])
    {
        case '+':
            answer = input1 + input2;
            break;
        case '-':
            answer = input1 - input2;
            break;
        case '*':
            answer = input1 * input2;
            break;
        case '/':
            answer = input1 / input2;
            break;
        default:
            printf("Error");
    }
    printf("%f", answer);



}