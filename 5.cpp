#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include<locale.h>
#include <stdlib.h>
#define h 3

int main()
{
	setlocale(LC_CTYPE, "Russian");

	struct student // основная структура
	{
		char surname[15]; // фамилия
		char name[15];	  // имя
		char num[15];		  // номер зачетной книжки
		char faculty[15];	// факультет
	}stud[h];
	int k = 0;
	char person[15];
	for (int i = 0; i < h; i++)						//
	{											//
		printf("\nВведите фамилию студента: \n");		//
		scanf("%s", &stud[i].surname);				//
		printf("\nВведите имя студента: \n");		//
		scanf("%s", &stud[i].name);					// цикл ввода данных структуры
		printf("\nВведите номер зачетной книжки студента: \n");	//
		scanf("%s", &stud[i].num);								//
		printf("\nВведите факультет студента: \n");				//
		scanf("%s", &stud[i].faculty);				//	
									//
	}												//
	
	printf("\nВведите фамилию студента, имя или номер зачетной книжки для поиска: \n");
	scanf("%s", person);
	for (int i = 0; i < h; i++)
	{
		if ((strcmp(person, stud[i].surname) == 0) || (strcmp(person, stud[i].name) == 0) || (strcmp(person, stud[i].num) == 0)) // проверка введенных данных
		{
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %s \n",stud[i].surname,stud[i].name, // если совпало выводим подходящие
					stud[i].faculty,stud[i].num);
			k++;
		}	
			 
	}
	if (k == 0) printf("Нет такого студента!\n\n"); // если не совпало, выводим соответствующее сообщение	
	
	return 0;
}
