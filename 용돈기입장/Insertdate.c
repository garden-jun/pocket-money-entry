#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"

//사용자의 정보를 삽입하는 함수   //전부 해결
void insert(USER* ptr, int num, int *count) {

	int sum = 0;

	//유저정보가 꽉 차지 않으면
	if (*count < MAX_NUM) {
		printf("\t\t   <날짜>: ");      scanf("%s", ptr[num].s[*count].date); getchar(); printf("\n");
		printf("\t\t   <식비>: ");      scanf("%d", &ptr[num].s[*count].food); getchar(); printf("\n");
		printf("\t\t   <교통비>: ");      scanf("%d", &ptr[num].s[*count].trans); getchar(); printf("\n");
		printf("\t\t   <피시방비>: ");   scanf("%d", &ptr[num].s[*count].pc); getchar(); printf("\n");
		printf("\t\t   <기타>: ");      scanf("%d", &ptr[num].s[*count].etc); getchar(); printf("\n");
		sum = ptr[num].s[*count].etc + ptr[num].s[*count].pc + ptr[num].s[*count].trans + ptr[num].s[*count].food;
		printf("\t\t\t총 지출액 : %d\n", sum);
		
		printf("\t\t\t  <한줄평>\n\n");   printf("\t\t"); gets(ptr[num].s[*count].memo); printf("\n");
		(*count)++;
		printf("\t\t\t입력되었습니다. \n\n");
	}
	//유저 정보가 꽉 차면
	else
		printf("\t\t\t사용자가 꽉 찼습니다. \n\n");
}
