#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"


//파일로부터 데이터를 불러오는 함수//
int openFile(USER* ptr, int* num,int* count) {
	int state, i = 0;
	char temp[30]="ABC";
	FILE* fp = fopen("UserInfo.txt", "rt");



	if (fp == NULL) {
		printf("저장된 데이터 없음!\n");
		return 1;
	}



	//파일에 저장된 데이터를 구조체 배열에 저장
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



	/* fclose함수는 종료시 오류가 발생하면
	0이 아닌 다른값을 리턴하므로 비정상 종료로 판단되면
	안내후 프로그램을 종료 */
	state = fclose(fp);
	if (state != 0) {
		printf("에러!\n");
		return -1;
	}

	return 0;
}
