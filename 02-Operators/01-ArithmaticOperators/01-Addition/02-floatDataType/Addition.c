#include<stdio.h> // header file

float fNumberOne = 10.35f;
float fNumberTwo = 23.23f;
float fSum = 0.0f;

int main(void)
{
	// code 
	fSum = fNumberOne + fNumberTwo;

	printf("Addition of %.4f + %.4f = %.4f \n", fNumberOne, fNumberTwo, fSum);

	return(0);
}
