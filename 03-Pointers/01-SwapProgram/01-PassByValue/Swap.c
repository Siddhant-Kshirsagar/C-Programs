#include<stdio.h>

// function declaration
void swap(int,int);

// entry point function
int main(void)
{
    // variable declaration
    int numberOne = 10;
    int numberTwo = 20;

    // code
    printf("\tValue before Swap \n");
    printf("\tnumberOne = %d \t numberTwo = %d \n",numberOne,numberTwo);

    swap(numberOne,numberTwo);

    printf("\tValue after Swap \n");
    printf("\tnumberOne = %d \t numberTwo = %d \n",numberOne,numberTwo);

    return(0);
}

void swap(numberOne,numberTwo)
{
    int temp;

    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;
}
