#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
	int mas[10], max, min;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}
	printf("\n");

	min = mas[0];
	max = mas[0];

	for (int i = 0; i < 10; i++)
	{
		if (mas[i] < min)
			min = mas[i];
		if (mas[i] > max)
			max = mas[i];
	}

	printf("%d\n", max - min);
	return 0;
}