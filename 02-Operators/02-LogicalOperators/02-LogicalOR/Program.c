#include<stdio.h>

int iNumberOne = 20;
int iNUmberTwo = 20;

int result = 0;


int main(void)
{

	//code
	result = (iNumberOne <= 0) || (iNUmberTwo >=0);
	printf("Logical OR return only '0' or '1' \t result = %d", result);
	return(0);
}
