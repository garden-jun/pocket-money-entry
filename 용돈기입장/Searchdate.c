#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"

//��¥�� ���ݾ��� �˻��ϴ� �Լ�/
int search(USER* ptr, int num,int *count) {
	char date[30];
	int i,sum=0;


	//����� �����Ͱ� �ִٸ�
	if (*count > 0) {
		printf("\n");
		printf("\t\t\t\t\t  ��¥�� �Է����ּ���(��:11.14): "); scanf("%s", date); getchar();
		printf("\n");

		for (i = 0; i < MAX_NUM; i++) {
			//strcmp�� ���ڿ��� ��ġ�Ҷ� 0�� ��ȯ
			//0�� C���� ������ �ǹ�
			//�׷��Ƿ� ! �� �ٿ� ������ �����Ͽ� ����
			if (!strcmp(date, ptr[num].s[i].date)) {
				printf("\t\t\t<��¥> : %s \n", ptr[num].s[i].date); printf("\n");
				printf("\t\t\t<�ĺ�> : %d\n ", ptr[num].s[i].food); printf("\n");
				printf("\t\t\t<�����> : %d\n ", ptr[num].s[i].trans); printf("\n");
				printf("\t\t\t<�ǹ��> : %d\n ", ptr[num].s[i].pc); printf("\n");
				printf("\t\t\t<��Ÿ>: %d\n ", ptr[num].s[i].etc); printf("\n");
				printf("\t\t\t  <������>\n\n");   printf("\t\t"); printf("%s", ptr[num].s[i].memo); printf("\n");
				sum = ptr[num].s[i].etc + ptr[num].s[i].pc + ptr[num].s[i].trans + ptr[num].s[i].food;
				printf("\t\t\t�� ����� : %d\n", sum);

				printf("\t\t\t��� ǥ�õǾ����ϴ�. \n\n");
				return 0;
			}
		}
		printf("\t\t\t�Էµ� ����ڰ� �����ϴ�. \n\n");
		return 0;
	}
	else {
		printf("\t\t\t�����Ͱ� �����ϴ�. \n\n");
		return 0;
	}
}