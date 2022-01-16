#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "헤더.h"

//비밀번호 찾기
void findpass(USER *ptr,int num){
	//어떤 유저인지 확인----> ex)김민교!김민교의 sel을 파악.
	char ans[30];
	
	printf("\n\n\n\n");
	printf("\t\t비밀번호를 찾아 볼까요!!?\n\n\n\n");
	
	printf("\t\t<<<<비밀번호 힌트>>>>\n\n");
	
	switch (ptr[num].sel)
	{
		case 1:   printf("\t\t(1)자신이 제일 아끼는 물건은?\n\n");
				

				while (1)
					{
						printf("\n\t\t답변 :"); scanf("%s", ans); printf("\n");
						if (strcmp(ptr[num].quiz, ans) == 0)
						{
							printf("\t\t당신의 비밀번호는 '%d'이에요!\n\n", ptr[num].pass);
							break;
						}
						else
							printf("\t\t땡!\n");
					
					}
				break;
		
		case 2:		printf("\t\t(2)자신이 제일 좋아하는 색은?\n\n");
			
		
				while (1)
					{
						printf("\n\t\t답변 :"); scanf("%s", ans); printf("\n");
						if (strcmp(ptr[num].quiz, ans) == 0)
						{
							printf("\t\t당신의 비밀번호는 '%d'이에요!\n\n", ptr[num].pass);
							break;
						}
						else
							printf("\t\t땡!\n");
						
					}
				break; 
		
		case 3:     printf("\t\t(3)자신이 가장 존경하는 사람은?\n\n");
					
			
				while (1)
					{
						printf("\n\t\t답변 :"); scanf("%s", ans); printf("\n");
						if (strcmp(ptr[num].quiz, ans) == 0)
						{
							printf("\t\t당신의 비밀번호는 '%d'이에요!\n\n", ptr[num].pass);
							break;
						}
						else
							printf("\t\t땡!\n");
						
					}
				break;
		}
	system("pause");
	system("cls");
}