#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"

//��й�ȣ ã��
void makepass(USER *ptr, int num) {
	//� �������� Ȯ��----> ex)��α�!��α��� sel�� �ľ�.
	printf("\t  ��й�ȣ ��Ʈ�� �ϳ� ����ּ���\n\n");
	printf("\t  (1)�ڽ��� ���� �Ƴ��� ������?\n\n");
	printf("\t  (2)�ڽ��� ���� �����ϴ� ����?\n\n");
	printf("\t  (3)�ڽ��� ���� �����ϴ� �����?\n\n");
	printf("\t  --> ");
	scanf("%d", &ptr[num].sel);
	getchar();
	printf("\n\n");

	switch (ptr[num].sel)
	{
	case 1:   printf("\t  <<<<(1)�ڽ��� ���� �Ƴ��� ������?>>>>\n\n");
		printf("\t  �亯 :"); scanf("%s*c",ptr[num].quiz);
		break;
	case 2:
		printf("\t  <<<<(2)�ڽ��� ���� �����ϴ� ����??>>>>\n\n");
		printf("\t  �亯 :"); gets((ptr[num].quiz));
		break;
	case 3:
		printf("\t  <<<<�ڽ��� ���� �����ϴ� �����?>>>>\n\n");
		printf("\t  �亯 :"); gets((ptr[num].quiz));
	}
}