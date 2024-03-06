#include<stdio.h>

int numberOne = 10;
int numberTwo = 20;

int result = 0;

int main(void)
{
    result = numberTwo / numberOne;
    printf("\t %d / %d = %d \n",numberTwo,numberOne,result);
    return(0);
}
