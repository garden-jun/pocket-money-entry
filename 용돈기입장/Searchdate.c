#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"

//날짜별 사용금액을 검색하는 함수/
int search(USER* ptr, int num,int *count) {
	char date[30];
	int i,sum=0;


	//저장된 데이터가 있다면
	if (*count > 0) {
		printf("\n");
		printf("\t\t\t\t\t  날짜를 입력해주세요(예:11.14): "); scanf("%s", date); getchar();
		printf("\n");

		for (i = 0; i < MAX_NUM; i++) {
			//strcmp는 문자열이 일치할때 0을 반환
			//0은 C언어에서 거짓을 의미
			//그러므로 ! 을 붙여 참으로 변경하여 실행
			if (!strcmp(date, ptr[num].s[i].date)) {
				printf("\t\t\t<날짜> : %s \n", ptr[num].s[i].date); printf("\n");
				printf("\t\t\t<식비> : %d\n ", ptr[num].s[i].food); printf("\n");
				printf("\t\t\t<교통비> : %d\n ", ptr[num].s[i].trans); printf("\n");
				printf("\t\t\t<피방비> : %d\n ", ptr[num].s[i].pc); printf("\n");
				printf("\t\t\t<기타>: %d\n ", ptr[num].s[i].etc); printf("\n");
				printf("\t\t\t  <한줄평>\n\n");   printf("\t\t"); printf("%s", ptr[num].s[i].memo); printf("\n");
				sum = ptr[num].s[i].etc + ptr[num].s[i].pc + ptr[num].s[i].trans + ptr[num].s[i].food;
				printf("\t\t\t총 지출액 : %d\n", sum);

				printf("\t\t\t모두 표시되었습니다. \n\n");
				return 0;
			}
		}
		printf("\t\t\t입력된 사용자가 없습니다. \n\n");
		return 0;
	}
	else {
		printf("\t\t\t데이터가 없습니다. \n\n");
		return 0;
	}
}