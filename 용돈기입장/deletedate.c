#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"


//������� ������ �����ϴ� �Լ�//
int deleted(USER* ptr, int num,int *count) {
	char date[30];
	int i, j;



	//���� ������ �Ѱ��� ����������
	if (*count > 0) {
		printf("��¥�� �Է����ּ���: ");
		scanf("%s", date);



		for (i = 0; i < MAX_NUM; i++) {
			//���ڿ��̹Ƿ� ���ϱ����� strcmp���
			if (strcmp(date, ptr[num].s[i].date) == 0) {

				(*count)--;
				printf("  �����Ͱ� �����Ǿ����ϴ�. \n\n");

				//�����Ͱ� ���� ���� �ʾҴٸ�
				if (i != MAX_NUM - 1) {
					for (j = i; j < MAX_NUM; j++) {
						//���ڿ��̹Ƿ� strcpy�� ����Ͽ� ������ ����
						strcpy(ptr[num].s[j].date, ptr[num].s[j + 1].date);
						ptr[num].s[j].food = ptr[num].s[j + 1].food;
						ptr[num].s[j].trans = ptr[num].s[j + 1].trans;
						ptr[num].s[j].pc = ptr[num].s[j + 1].pc;
						ptr[num].s[j].etc = ptr[num].s[j + 1].etc;
						//����ü �迭�� �������� NULL�� �ٲ�
						*ptr[num].s[MAX_NUM - 1].date = NULL;
						ptr[num].s[MAX_NUM - 1].food = NULL;
						ptr[num].s[MAX_NUM - 1].trans = NULL;
						ptr[num].s[MAX_NUM - 1].pc = NULL;
						ptr[num].s[MAX_NUM - 1].etc = NULL;
					}
				}

				//�����Ͱ� ���� á�ٸ�
				else {
					//����ü �迭�� �������� NULL�� �ٲ�
					*ptr[num].s[MAX_NUM - 1].date = NULL;
					ptr[num].s[MAX_NUM - 1].food = NULL;
					ptr[num].s[MAX_NUM - 1].trans = NULL;
					ptr[num].s[MAX_NUM - 1].pc = NULL;
					ptr[num].s[MAX_NUM - 1].etc = NULL;
				}
				return 0;
			}
		}
		printf("�����Ͱ� �����ϴ�. \n\n");
		return 0;
	}


	//����� ���� ������ ���ٸ�
	else {
		printf("  No Data \n\n");
		return 0;
	}
}
