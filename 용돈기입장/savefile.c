#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"

//�����͸� ���Ͽ� �����ϴ� �Լ�//
int saveFile(USER* ptr, int *num,int *count) {

	if (1) {
		int i=0,j, state;
		FILE* fp = fopen("UserInfo.txt", "wt");



		/* fopen�Լ��� �����߻��� NULL�� �����ϹǷ�
		���� ���� �� �����߻��� ���α׷��� ���� */
		if (fp == NULL) {
			printf("\t\t\t\t\t  ������ �������� ����!!!\n");
			return -1;
		}



		//����ü �迭�� ����� �����͸� ���Ͽ� ����
		//�ٹٲ����� �����Ͽ� ����
		for (i = 0; i < *num; i++) {
			fprintf(fp, "%s %d %s %d", ptr[i].name, ptr[i].pass, ptr[i].quiz, ptr[i].sel);
			fputc('\n', fp);
			for (j = 0; j < count[i]; j++) {
				fprintf(fp, "%s %d %d %d %d %s",
					ptr[i].s[j].date, ptr[i].s[j].food, ptr[i].s[j].trans, ptr[i].s[j].pc, ptr[i].s[j].etc,ptr[i].s[j].memo);
				fputc('\n', fp);
			}
			fprintf(fp,"ABC\n");
		}



		/* fclose�Լ��� ����� ������ �߻��ϸ�
		0�� �ƴ� �ٸ����� �����ϹǷ� ������ ����� �ǴܵǸ�
		�ȳ��� ���α׷��� ���� */
		state = fclose(fp);
		if (state != 0) {
			printf("\t\t\t\t\t  File Close Error!\n");
			return 1;
		}
		printf("\t\t\t\t\t  \n  Data Save \n");
		return 0;
	}

	else {
		printf("\t\t\t\t\t  \n  Exit \n");
		return 0;
	}
}
