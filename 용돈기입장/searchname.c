#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "���.h"

//��¥�� ���ݾ��� �˻��ϴ� �Լ�/
int searchname(USER* ptr, int *num) {
	char name[30];
	int i;

	//����� �����Ͱ� �ִٸ�
	if (*num > 0) {
		printf("\n\n\n\n");
		printf("\t\t�̸��� �Է����ּ���: "); scanf("%s", name); getchar();
		printf("\n");
		

		for (i = 0; i < MAX_NUM; i++) {
			//strcmp�� ���ڿ��� ��ġ�Ҷ� 0�� ��ȯ
			//0�� C���� ������ �ǹ�
			//�׷��Ƿ� ! �� �ٿ� ������ �����Ͽ� ����
			if (!strcmp(name, ptr[i].name)) {
				return i;
			}
		}
		printf("\t\t�Էµ� ����ڰ� �����ϴ�. \n\n");
		system("pause");
		system("cls");
		return -1;
	}
	else {
		printf("\t\t �����Ͱ� �����ϴ�. \n\n");
		return 0;
	}
}