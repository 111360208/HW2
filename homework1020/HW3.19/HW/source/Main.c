#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, rate, total;
	int day;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &a);
		if (a == -1)
			break;
		printf("Enter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of loan in days:");
		scanf("%d", &day);
		total = a * rate * day / 365;
		printf("The interest charge is $:%.2f\n", total);

	}

	;

}