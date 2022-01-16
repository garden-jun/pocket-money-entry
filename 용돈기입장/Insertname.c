#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"
#include <stdlib.h>
#include <windows.h>

//사용자의 정보를 삽입하는 함수   //전부 해결
void insertname(USER* ptr, int *num) {

	//유저정보가 꽉 차지 않으면
	if (*num < MAX_NUM) {
		printf("\n\n\n\n");
		printf("\t새로운 회원님 안녕하세요! 정보를 입력해주세요! \n\n");
		printf("\t\t이름: ");      scanf("%s", ptr[*num].name); getchar(); printf("\n");
		printf("\t\t비밀번호: ");	scanf("%d%", &ptr[*num].pass); getchar(); printf("\n");
		printf("\n");
		makepass(ptr, *num);
		(*num)++;
		printf("\n\n");
		printf("\t  가입 완료! \n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");
		printf("\t%s회원님~ \n\n 앞으로 용돈 잘 작성해봐요~히히\n\n ", ptr[*num].name);


	}

	//유저 정보가 꽉 차면
	else
		printf("\t\t\t\t사용자가 꽉 찼습니다. \n\n");
}