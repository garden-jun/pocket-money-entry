#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"


//���Ϸκ��� �����͸� �ҷ����� �Լ�//
int openFile(USER* ptr, int* num,int* count) {
	int state, i = 0;
	char temp[30]="ABC";
	FILE* fp = fopen("UserInfo.txt", "rt");



	if (fp == NULL) {
		printf("����� ������ ����!\n");
		return 1;
	}



	//���Ͽ� ����� �����͸� ����ü �迭�� ����
	while (1) {
		fscanf(fp,"%s %d %s %d", ptr[*num].name,&ptr[*num].pass,ptr[*num].quiz,&ptr[*num].sel);
		while (1) {
			fscanf(fp, " %s %d %d %d %d %s", ptr[*num].s[*(count+i)].date,
				&ptr[*num].s[*(count+i)].food, &ptr[*num].s[*(count+i)].trans, &ptr[*num].s[*(count+i)].pc, &ptr[*num].s[*(count+i)].etc);
			fgets(ptr[*num].s[*(count + i)].memo, sizeof(ptr[*num].s[*(count + i)].memo), fp);
			if (strcmp(ptr[*num].s[*count].date, temp) == 0)
			{
				i++;
				(*num)++;
				break;
			}
			else if (feof(fp) != 0)
				break;

			else (*(count+i))++;
		}
		if (feof(fp) != 0)
			break;
	}



	/* fclose�Լ��� ����� ������ �߻��ϸ�
	0�� �ƴ� �ٸ����� �����ϹǷ� ������ ����� �ǴܵǸ�
	�ȳ��� ���α׷��� ���� */
	state = fclose(fp);
	if (state != 0) {
		printf("����!\n");
		return -1;
	}

	return 0;
}
