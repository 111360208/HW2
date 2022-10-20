#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sal;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &sal);
		if (sal == -1)
			break;
		float salary = ((sal * 0.09) + 200.00);
		printf("Salary is: $%.2f\n", salary);

	}
}