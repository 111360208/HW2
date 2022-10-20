#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int atnum;
	float bb, tcr, tcd, cl, sum;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf("%d", &atnum);
		if (atnum == -1)
			break;
		printf("Enter beginning balance:");
		scanf("%f", &bb);
		printf("Enter total charges:");
		scanf("%f", &tcr);
		printf("Enter total credits:");
		scanf("%f", &tcd);
		printf("Enter credit limit:");
		scanf("%f", &cl);
		sum = bb + tcr - tcd;
		printf("Account:%d\n", atnum);
		printf("Credit limit:%.2f\n", cl);
		printf("Balance:%.2f\n", sum);
		if (sum > cl)
			printf("Credit limit Exceeded.\n");
	}
}