#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth;
	printf("Enter length:");
	scanf("%d", &length);
	printf("Enter breadth:");
	scanf("%d", &breadth);
	for (int i = 1; i <= length; i++)
	{
		if (i == 1 || i == length)
		{
			for (int j = 0; j < breadth; j++)
				printf("*");
			printf("\n");
		}
		else
		{
			printf("*");
			for (int j = 1; j <= breadth - 2; j++)
				printf(" ");
			printf("*\n");
		}

	}
}