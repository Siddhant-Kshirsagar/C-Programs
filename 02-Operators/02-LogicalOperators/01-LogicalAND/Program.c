#include<stdio.h>

int iNumberOne = 10;
int iNUmberTwo = 20;

int result = 0;


int main(void)
{

	//code
	result = (iNumberOne < 0) && (iNUmberTwo >0);
	printf("Logical AND return only '0' or '1' \t result = %d", result);
	return(0);
}
