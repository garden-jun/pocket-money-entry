#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "헤더.h"

//날짜별 사용금액을 검색하는 함수/
int searchname(USER* ptr, int *num) {
	char name[30];
	int i;

	//저장된 데이터가 있다면
	if (*num > 0) {
		printf("\n\n\n\n");
		printf("\t\t이름을 입력해주세요: "); scanf("%s", name); getchar();
		printf("\n");
		

		for (i = 0; i < MAX_NUM; i++) {
			//strcmp는 문자열이 일치할때 0을 반환
			//0은 C언어에서 거짓을 의미
			//그러므로 ! 을 붙여 참으로 변경하여 실행
			if (!strcmp(name, ptr[i].name)) {
				return i;
			}
		}
		printf("\t\t입력된 사용자가 없습니다. \n\n");
		system("pause");
		system("cls");
		return -1;
	}
	else {
		printf("\t\t 데이터가 없습니다. \n\n");
		return 0;
	}
}