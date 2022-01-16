#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"


//사용자의 정보를 삭제하는 함수//
int deleted(USER* ptr, int num,int *count) {
	char date[30];
	int i, j;



	//유저 정보가 한개라도 남아있으면
	if (*count > 0) {
		printf("날짜를 입력해주세요: ");
		scanf("%s", date);



		for (i = 0; i < MAX_NUM; i++) {
			//문자열이므로 비교하기위해 strcmp사용
			if (strcmp(date, ptr[num].s[i].date) == 0) {

				(*count)--;
				printf("  데이터가 삭제되었습니다. \n\n");

				//데이터가 가득 차지 않았다면
				if (i != MAX_NUM - 1) {
					for (j = i; j < MAX_NUM; j++) {
						//문자열이므로 strcpy를 사용하여 데이터 복사
						strcpy(ptr[num].s[j].date, ptr[num].s[j + 1].date);
						ptr[num].s[j].food = ptr[num].s[j + 1].food;
						ptr[num].s[j].trans = ptr[num].s[j + 1].trans;
						ptr[num].s[j].pc = ptr[num].s[j + 1].pc;
						ptr[num].s[j].etc = ptr[num].s[j + 1].etc;
						//구조체 배열의 마지막을 NULL로 바꿈
						*ptr[num].s[MAX_NUM - 1].date = NULL;
						ptr[num].s[MAX_NUM - 1].food = NULL;
						ptr[num].s[MAX_NUM - 1].trans = NULL;
						ptr[num].s[MAX_NUM - 1].pc = NULL;
						ptr[num].s[MAX_NUM - 1].etc = NULL;
					}
				}

				//데이터가 가득 찼다면
				else {
					//구조체 배열의 마지막을 NULL로 바꿈
					*ptr[num].s[MAX_NUM - 1].date = NULL;
					ptr[num].s[MAX_NUM - 1].food = NULL;
					ptr[num].s[MAX_NUM - 1].trans = NULL;
					ptr[num].s[MAX_NUM - 1].pc = NULL;
					ptr[num].s[MAX_NUM - 1].etc = NULL;
				}
				return 0;
			}
		}
		printf("데이터가 없습니다. \n\n");
		return 0;
	}


	//저장된 유저 정보가 없다면
	else {
		printf("  No Data \n\n");
		return 0;
	}
}
