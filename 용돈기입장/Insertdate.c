#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"

//������� ������ �����ϴ� �Լ�   //���� �ذ�
void insert(USER* ptr, int num, int *count) {

	int sum = 0;

	//���������� �� ���� ������
	if (*count < MAX_NUM) {
		printf("\t\t   <��¥>: ");      scanf("%s", ptr[num].s[*count].date); getchar(); printf("\n");
		printf("\t\t   <�ĺ�>: ");      scanf("%d", &ptr[num].s[*count].food); getchar(); printf("\n");
		printf("\t\t   <�����>: ");      scanf("%d", &ptr[num].s[*count].trans); getchar(); printf("\n");
		printf("\t\t   <�ǽù��>: ");   scanf("%d", &ptr[num].s[*count].pc); getchar(); printf("\n");
		printf("\t\t   <��Ÿ>: ");      scanf("%d", &ptr[num].s[*count].etc); getchar(); printf("\n");
		sum = ptr[num].s[*count].etc + ptr[num].s[*count].pc + ptr[num].s[*count].trans + ptr[num].s[*count].food;
		printf("\t\t\t�� ����� : %d\n", sum);
		
		printf("\t\t\t  <������>\n\n");   printf("\t\t"); gets(ptr[num].s[*count].memo); printf("\n");
		(*count)++;
		printf("\t\t\t�ԷµǾ����ϴ�. \n\n");
	}
	//���� ������ �� ����
	else
		printf("\t\t\t����ڰ� �� á���ϴ�. \n\n");
}
