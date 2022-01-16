#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "헤더.h"

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main(void) {
	system("title ManyMoney");
	system("color F0");
	system("mode con:cols=60 lines=100");
				
	char input, opt, sel, beep =  '\a'; // 선택하는 변수
	int i = 0, a;
	int inputpass;
	USER user[MAX_NUM]; //사용자 정보를 저장할 구조체 배열
	int count[MAX_NUM] = { 0 }, people = 0, person; //저장된 user수


	openFile(user,&people, count);//저장된 데이터를 불러오는 함수
	
	gotoxy(0, 5); printf("-------------------1.가입하기  2.이어하기-------------------");
	gotoxy(30, 10);	opt = getchar(); getchar();

	while (opt != '1' && opt != '2') {
		gotoxy(20, 10);	printf("다시입력!");
		gotoxy(30, 10); opt = getchar(); getchar();//사용자가 enter를 누를꺼같기 때문에 getchar함수로 엔터를 먹어버립니다.
	}
	system("cls");

	switch (opt)
	{
	case '1':		insertname(user, &people);
		/*person = searchname(user, &people);
		printf("\t\t\t\t\t  1) 비밀번호 입력\n\n ");
		printf("\t\t\t\t\t  2) 비밀번호 찾기\n");
		printf("\t\t\t\t\t  ----->");scanf("%d*c", &sel);
		printf("\n");
		
		while (sel != 1 && sel != 2) {
			printf("\t\t\t\t\t  다시입력!");
			scanf("%d", &sel);
			getchar();
		}
		system("cls");
		switch (sel)
		{
		case 1:
			while (i < 5)
				pr {intf("\n\n\n\n");
				printf("\t\t\t\t\t  비밀번호 입력: ");	scanf("%d%*c", &inputpass);
				printf("\n\n");
				
				if (inputpass == user[person].pass)
				{
					printf("\t\t\t\t\t  뉴비회원님이시네요~ 방가방가!!^^\n\n");
					system("pause");
					system("cls");
					break;
				}
				if (i == 4)
				{
					printf("\t\t\t\t\t  꺼져!\n\n");
					return 0;
				}
				i++;

				if (inputpass != user[person].pass) 
				{
					printf("\t\t\t\t\t  비밀번호 불일치!\n\t\t\t\t\t   ( 비밀번호찾기 -->[1] 계속입력 -->[2] )");
					 scanf("%d%*c", &a); printf("\n\n");
					if (a == 1)
					{
						system("pause");
						system("cls");
						findpass(user, person);
					}
					else
						continue;
					}
				
			}
			break;
			
		case 2:
			findpass(user, person);
			person = searchname(user, &people);
			printf("\t\t\t\t\t  비밀번호 입력: ");	scanf("%d%*c", &inputpass);
			printf("\n\n");

			if (inputpass == user[person].pass)
			{
				printf("\t\t\t\t\t 사랑합니다 회원님~ 방가방가!!^^\n\n");
				system("pause");
				system("cls");
			}
			break;
			*/
		system("pause");
		system("cls");
		break;
	case '2':	person = searchname(user, &people);
				while (person == -1)
					{
						person=searchname(user, &people);
					}
			printf("\n\n");
			printf("\t\t1) 비밀번호 입력 \n\n");
			printf("\t\t2) 비밀번호 찾기\n\n ");
			printf("\t\t ---> :"); sel = getchar(); getchar(); printf("\n");
			
			while (sel != '1' && sel != '2') {
				gotoxy(4, 12); printf("\t\t다시입력:");
				sel = getchar(); getchar(); printf("\n");
			}
			
			system("cls");
			
			switch (sel)
			{
			case '1':
				
					while (i < 5) {
						printf("\n\n");
						printf("\t\t비밀번호 입력: ");
						scanf("%d%*c", &inputpass); printf("\n");
							if (inputpass == user[person].pass)
								{
									printf("\n\n");
									printf("\t\t회원님이시네요~ 방가방가!!^^\n\n");
									system("pause");
									system("cls");
									break;
								}
							if (i == 4)
								{	
									printf("%c", beep);
									printf("\t\t가계부 훔쳐보는건 나쁜짓~ \n\n");
									return 0;
								}
						i++;
							if (inputpass != user[person].pass)
								{
									printf("\t\t비밀번호 불일치!\n\t  ( 비밀번호찾기 -->[1] 계속입력 -->[2] )");
									a = getchar(); getchar(); printf("\n");
									if (a == '1')
										{
											system("pause");
											system("cls");
											findpass(user, person);
										}
									else {
										system("pause");
										system("cls");
										continue;
									}
								}
							
				}
				break;
			case '2':
				 findpass(user, person);
				 printf("\n\n");
				 printf("\t\t비밀번호 입력: ");
				 scanf("%d%*c", &inputpass); printf("\n");
				 if (inputpass == user[person].pass)
				 {
					 printf("\n\n");
					 printf("\t\t회원님이시네요~ 방가방가!!^^\n\n");
					 system("pause");
					 system("cls");
					
				 }
				 else {
					 printf("\t\t방금 찾으셨는데,,,까먹으셨나봐요...\n\n \t\t이번만 봐드릴게요!\n\n");
					 system("pause");
					 system("cls");
				 }
						break;
			}
	}
							//메뉴 선택
	while (1) {
		printf("\n\n\n\n");
		printf("\t\t#### 용돈 관리 프로그램#### \n\n");
		printf("\t\t1. 입력 \n\n");
		printf("\t\t2. 삭제 \n\n");
		printf("\t\t3. 날짜별로 검색 \n\n");
		printf("\t\t4. 항목별로 검색 \n\n");
		printf("\t\t5. 전체 출력 \n\n");
		printf("\t\t6. 채무관계 \n\n");
		printf("\t\t7. 저장하고 나가기 \n\n");
		printf("\n");
		printf("\t\t입력해주세요(1~6): ");
		input = getchar(); getchar(); printf("\n");
		system("pause");
		system("cls");

		switch (input)
		{
		case '1':
			printf("\n\n\n\n");
			printf("\t\t\t  [입력] \n\n");
			printf("\t\t (날짜 입력 예시 : 11.03)\n\n");
			insert(user, person, &count[person]);
			if (count[person] > 1)
			soltdate(user, person, &count[person]);
			system("pause");
			system("cls");

			break;

		case '2':
			printf("\t[삭제] \n");
			deleted(user,person, &count[person]);
			system("pause");
			system("cls");
			break;
		case '3':
			printf("\n\n\n\n");
			printf("\t\t\t  [날짜별로 검색] \n");
			search(user,person, &count[person]);
			system("pause");
			system("cls");
			break;
		case '4':
			printf("\n\n\n\n");
			printf("\t\t\t  [항목별로 검색] \n");
			//categoryprint(user, person, count[person]);
			system("pause");
			system("cls");
			break;
		case '5' :
			printf("\n\n\n\n");
			printf("\t\t\t  [전체출력] \n\n");
			printAll(user, person,count[person]);
			system("pause");
			system("cls");
			break;
		case '6':
			printf("\n\n\n\n");
			printf("\t\t\t  [채무 관계] \n\n");
			//importmoney(user, person, count[person]);
			system("pause");
			system("cls");
			break;
		case '7':
			saveFile(user,&people, count);
			system("pause");
			system("cls");
			return 0;
		default:
			printf("\t\t\t  \n잘못 입력했습니다. 다시입력해주세요");
			system("pause");
			system("cls");
		}
	}
	return 0;
}