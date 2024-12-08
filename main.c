#include <stdio.h>
#include "calculate.h"

int
main(void)
{
	float Numeral;
	char Operation[4];
	float Result;
	printf("number: ");
	scanf("%f",&Numeral);
	printf("operation: ");
	scanf("%s",Operation);
	Result = Calculate(Numeral, Operation);
	printf("%6.2f\n",Result);
	return 0;
}
