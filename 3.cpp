#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include<locale.h>

int main () 
{
	setlocale(LC_ALL, "rus"); // ������ ���� ������� �� ��������

	int *mas, k; // ��������� ����������� �� ������ mas � ����������, ������������ ��� ������� ������������� �������

	srand(time(0)); 
	printf("������� ������ ������� >1\n"); //
	scanf("%d", &k);					   // ���� ������� �������
	while (k <= 1)
	{
		printf("������� ������ ������� ��� ���\n");  // ���� ������ ������ ��� ����� 1 
		scanf("%d", &k);
	}

	mas = (int*)malloc(k * sizeof(k)); // ��������� ������ ��� ������� 

	for (int i = 0; i < k; i++)
	{
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}
	free(mas); // ������������ ������
	printf("\n");
	return 0;
}
