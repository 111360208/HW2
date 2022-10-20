#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float rate;
	for (int i = 0; i < 5; i++)
	{
		float sum = 5000;
		rate = (1 + 0.1 + (i*0.005));
		for (int j = 1; j <= 15; j++)
		{
			sum = sum * rate;
		}
		printf("%f\n", sum);
	}

}



