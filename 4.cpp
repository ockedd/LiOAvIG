#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

#define m 10
#define n 10

int main () 
{
	setlocale(LC_ALL, "rus");

	int mas[m][n], res = 0;

	srand(time(0));

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = rand() % 100;
			printf("%3d ", mas[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			res += mas[i][j];
		}
		printf("\n");
		printf("%d строка, сумма = %d", i + 1, res);
		res = 0;
	}
	printf("\n");

	return 0;
}