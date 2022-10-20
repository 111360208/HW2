#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hr;
	float rate, sal;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf("%d", &hr);
		if (hr == -1)
			break;
		printf("Enter hourly rate of the woker($00.00):");
		scanf("%f", &rate);
		if (hr > 40)
		{
			int a = (hr - 40);
			sal = hr * rate + (a * rate / 2);
			printf("Salary is $%.2f\n", sal);
		}
		else
		{
			sal = hr * rate;
			printf("Salary is $%.2f\n", sal);
		}


	}
}