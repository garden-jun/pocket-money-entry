#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"


//����� ��� ��������� ����ϴ� �Լ�//
void printAll(USER* ptr, int num,int count) {
	int i = 0;


	if (count > 0) {
		for (i = 0; i < count; i++) {
			printf("\t\t   < ��¥ : %s >\n", ptr[num].s[i].date); printf("\n");
			printf("\t\t   �ĺ� : %d\n ", ptr[num].s[i].food); printf("\n");
			printf("\t\t   ����� : %d\n ", ptr[num].s[i].trans); printf("\n");
			printf("\t\t   �ǹ�� : %d\n ", ptr[num].s[i].pc); printf("\n");
			printf("\t\t   ��Ÿ : %d\n ", ptr[num].s[i].etc); printf("\n");
			printf("\t\t\t  <������>\n\n");   printf("\t\t"); printf("%s", ptr[num].s[i].memo); printf("\n\n");
		}
		printf("\t\t\t  ��µǾ����ϴ�. \n\n");
	}
	else
		printf("\t\t\t  ����� �����Ͱ� �����ϴ�. \n\n");
	
}