#include<stdio.h>

//function declaration
void swap(int*,int*);

// entry point function
int main(void)
{
    //variable declaration
    int numberOne = 10;
    int numberTwo = 20;

    printf("\t Value before swap\n");
    printf("\t numberOne = %d \t numberTwo = %d \n",numberOne,numberTwo);

    swap(&numberOne,&numberTwo);

    printf("\t Value after swap\n");
    printf("\t numberOne = %d \t numberTwo = %d \n",numberOne,numberTwo);

    return(0);
}

void swap(int *numberOne, int *numberTwo)
{
    // variable declaration
    int numberTemp;

    // code
    numberTemp = *numberOne;
    *numberOne = *numberTwo;
    *numberTwo = numberTemp;
}

