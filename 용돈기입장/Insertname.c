#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"
#include <stdlib.h>
#include <windows.h>

//������� ������ �����ϴ� �Լ�   //���� �ذ�
void insertname(USER* ptr, int *num) {

	//���������� �� ���� ������
	if (*num < MAX_NUM) {
		printf("\n\n\n\n");
		printf("\t���ο� ȸ���� �ȳ��ϼ���! ������ �Է����ּ���! \n\n");
		printf("\t\t�̸�: ");      scanf("%s", ptr[*num].name); getchar(); printf("\n");
		printf("\t\t��й�ȣ: ");	scanf("%d%", &ptr[*num].pass); getchar(); printf("\n");
		printf("\n");
		makepass(ptr, *num);
		(*num)++;
		printf("\n\n");
		printf("\t  ���� �Ϸ�! \n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");
		printf("\t%sȸ����~ \n\n ������ �뵷 �� �ۼ��غ���~����\n\n ", ptr[*num].name);


	}

	//���� ������ �� ����
	else
		printf("\t\t\t\t����ڰ� �� á���ϴ�. \n\n");
}