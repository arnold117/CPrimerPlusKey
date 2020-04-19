#include<stdio.h>

int main(void)
{
	float salary;
	
	printf("\aEnter your desired monthly salary: ");//alarm \a
	printf("$________\b\b\b\b\b\b\b");//back \b
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is$%.2f a year.", salary, salary*12.0);//tab \t
	printf("\rGee!\n");//return \r
	
	return 0;
}
