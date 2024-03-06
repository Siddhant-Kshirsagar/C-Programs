#include<stdio.h>

float numberOne = 10.0f;
float numberTwo = 20.0f;

float result = 0.0f;

int main(void)
{
    result = numberTwo / numberOne;
    printf("\t %.2f / %.2f = %.2f\n",numberTwo,numberOne,result);
    return(0);
}
