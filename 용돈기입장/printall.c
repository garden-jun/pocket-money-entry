#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"


//저장된 모든 사용정보를 출력하는 함수//
void printAll(USER* ptr, int num,int count) {
	int i = 0;


	if (count > 0) {
		for (i = 0; i < count; i++) {
			printf("\t\t   < 날짜 : %s >\n", ptr[num].s[i].date); printf("\n");
			printf("\t\t   식비 : %d\n ", ptr[num].s[i].food); printf("\n");
			printf("\t\t   교통비 : %d\n ", ptr[num].s[i].trans); printf("\n");
			printf("\t\t   피방비 : %d\n ", ptr[num].s[i].pc); printf("\n");
			printf("\t\t   기타 : %d\n ", ptr[num].s[i].etc); printf("\n");
			printf("\t\t\t  <한줄평>\n\n");   printf("\t\t"); printf("%s", ptr[num].s[i].memo); printf("\n\n");
		}
		printf("\t\t\t  출력되었습니다. \n\n");
	}
	else
		printf("\t\t\t  출력할 데이터가 없습니다. \n\n");
	
}