#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include<locale.h>
#include <stdlib.h>
#define h 3

int main()
{
	setlocale(LC_CTYPE, "Russian");

	struct student // �������� ���������
	{
		char surname[15]; // �������
		char name[15];	  // ���
		char num[15];		  // ����� �������� ������
		char faculty[15];	// ���������
	}stud[h];
	int k = 0;
	char person[15];
	for (int i = 0; i < h; i++)						//
	{											//
		printf("\n������� ������� ��������: \n");		//
		scanf("%s", &stud[i].surname);				//
		printf("\n������� ��� ��������: \n");		//
		scanf("%s", &stud[i].name);					// ���� ����� ������ ���������
		printf("\n������� ����� �������� ������ ��������: \n");	//
		scanf("%s", &stud[i].num);								//
		printf("\n������� ��������� ��������: \n");				//
		scanf("%s", &stud[i].faculty);				//	
									//
	}												//
	
	printf("\n������� ������� ��������, ��� ��� ����� �������� ������ ��� ������: \n");
	scanf("%s", person);
	for (int i = 0; i < h; i++)
	{
		if ((strcmp(person, stud[i].surname) == 0) || (strcmp(person, stud[i].name) == 0) || (strcmp(person, stud[i].num) == 0)) // �������� ��������� ������
		{
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %s \n",stud[i].surname,stud[i].name, // ���� ������� ������� ����������
					stud[i].faculty,stud[i].num);
			k++;
		}	
			 
	}
	if (k == 0) printf("��� ������ ��������!\n\n"); // ���� �� �������, ������� ��������������� ���������	
	
	return 0;
}
