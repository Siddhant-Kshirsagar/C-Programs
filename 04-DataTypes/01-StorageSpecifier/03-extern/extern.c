#include<stdio.h>

int iNumber = 10;

void printInfo(void);

int main(void)
{
	printf("iNumber is print in other file to show use of extern\n");
	printInfo();
	return(0);
}
