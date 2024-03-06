#include<stdio.h>

float numberOne = 10.0f;
float numberTwo = 20.0f;

float result = 0.0f;

int main(void)
{
    result = numberOne * numberTwo;
    printf("\t %.2f * %.2f = %.2f\n",numberOne,numberTwo,result);
    return(0);
}
