#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"

//비밀번호 찾기
void makepass(USER *ptr, int num) {
	//어떤 유저인지 확인----> ex)김민교!김민교의 sel을 파악.
	printf("\t  비밀번호 힌트를 하나 골라주세요\n\n");
	printf("\t  (1)자신이 제일 아끼는 물건은?\n\n");
	printf("\t  (2)자신이 가장 좋아하는 색은?\n\n");
	printf("\t  (3)자신이 가장 존경하는 사람은?\n\n");
	printf("\t  --> ");
	scanf("%d", &ptr[num].sel);
	getchar();
	printf("\n\n");

	switch (ptr[num].sel)
	{
	case 1:   printf("\t  <<<<(1)자신이 제일 아끼는 물건은?>>>>\n\n");
		printf("\t  답변 :"); scanf("%s*c",ptr[num].quiz);
		break;
	case 2:
		printf("\t  <<<<(2)자신이 가장 좋아하는 색은??>>>>\n\n");
		printf("\t  답변 :"); gets((ptr[num].quiz));
		break;
	case 3:
		printf("\t  <<<<자신이 가장 존경하는 사람은?>>>>\n\n");
		printf("\t  답변 :"); gets((ptr[num].quiz));
	}
}