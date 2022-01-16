#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"

//데이터를 파일에 저장하는 함수//
int saveFile(USER* ptr, int *num,int *count) {

	if (1) {
		int i=0,j, state;
		FILE* fp = fopen("UserInfo.txt", "wt");



		/* fopen함수는 오류발생시 NULL을 리턴하므로
		파일 개방 중 오류발생시 프로그램을 종료 */
		if (fp == NULL) {
			printf("\t\t\t\t\t  파일을 열지못함 에러!!!\n");
			return -1;
		}



		//구조체 배열에 저장된 데이터를 파일에 저장
		//줄바꿈으로 구분하여 저장
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



		/* fclose함수는 종료시 오류가 발생하면
		0이 아닌 다른값을 리턴하므로 비정상 종료로 판단되면
		안내후 프로그램을 종료 */
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
