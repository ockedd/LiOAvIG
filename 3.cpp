#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include<locale.h>

int main () 
{
	setlocale(LC_ALL, "rus"); // мен€ем €зык консоли на руссмкий

	int *mas, k; // объ€вл€ем указательно на массив mas и переменную, используемую дл€ размера произвольного массива

	srand(time(0)); 
	printf("¬ведите размер массива >1\n"); //
	scanf("%d", &k);					   // ввод размера массива
	while (k <= 1)
	{
		printf("¬ведите размер массива еще раз\n");  // если размер меньше или равен 1 
		scanf("%d", &k);
	}

	mas = (int*)malloc(k * sizeof(k)); // выделение пам€ти дл€ массива 

	for (int i = 0; i < k; i++)
	{
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}
	free(mas); // освобождение пам€ти
	printf("\n");
	return 0;
}
