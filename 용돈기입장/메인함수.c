#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "���.h"

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
				
	char input, opt, sel, beep =  '\a'; // �����ϴ� ����
	int i = 0, a;
	int inputpass;
	USER user[MAX_NUM]; //����� ������ ������ ����ü �迭
	int count[MAX_NUM] = { 0 }, people = 0, person; //����� user��


	openFile(user,&people, count);//����� �����͸� �ҷ����� �Լ�
	
	gotoxy(0, 5); printf("-------------------1.�����ϱ�  2.�̾��ϱ�-------------------");
	gotoxy(30, 10);	opt = getchar(); getchar();

	while (opt != '1' && opt != '2') {
		gotoxy(20, 10);	printf("�ٽ��Է�!");
		gotoxy(30, 10); opt = getchar(); getchar();//����ڰ� enter�� ���������� ������ getchar�Լ��� ���͸� �Ծ�����ϴ�.
	}
	system("cls");

	switch (opt)
	{
	case '1':		insertname(user, &people);
		/*person = searchname(user, &people);
		printf("\t\t\t\t\t  1) ��й�ȣ �Է�\n\n ");
		printf("\t\t\t\t\t  2) ��й�ȣ ã��\n");
		printf("\t\t\t\t\t  ----->");scanf("%d*c", &sel);
		printf("\n");
		
		while (sel != 1 && sel != 2) {
			printf("\t\t\t\t\t  �ٽ��Է�!");
			scanf("%d", &sel);
			getchar();
		}
		system("cls");
		switch (sel)
		{
		case 1:
			while (i < 5)
				pr {intf("\n\n\n\n");
				printf("\t\t\t\t\t  ��й�ȣ �Է�: ");	scanf("%d%*c", &inputpass);
				printf("\n\n");
				
				if (inputpass == user[person].pass)
				{
					printf("\t\t\t\t\t  ����ȸ�����̽ó׿�~ �氡�氡!!^^\n\n");
					system("pause");
					system("cls");
					break;
				}
				if (i == 4)
				{
					printf("\t\t\t\t\t  ����!\n\n");
					return 0;
				}
				i++;

				if (inputpass != user[person].pass) 
				{
					printf("\t\t\t\t\t  ��й�ȣ ����ġ!\n\t\t\t\t\t   ( ��й�ȣã�� -->[1] ����Է� -->[2] )");
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
			printf("\t\t\t\t\t  ��й�ȣ �Է�: ");	scanf("%d%*c", &inputpass);
			printf("\n\n");

			if (inputpass == user[person].pass)
			{
				printf("\t\t\t\t\t ����մϴ� ȸ����~ �氡�氡!!^^\n\n");
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
			printf("\t\t1) ��й�ȣ �Է� \n\n");
			printf("\t\t2) ��й�ȣ ã��\n\n ");
			printf("\t\t ---> :"); sel = getchar(); getchar(); printf("\n");
			
			while (sel != '1' && sel != '2') {
				gotoxy(4, 12); printf("\t\t�ٽ��Է�:");
				sel = getchar(); getchar(); printf("\n");
			}
			
			system("cls");
			
			switch (sel)
			{
			case '1':
				
					while (i < 5) {
						printf("\n\n");
						printf("\t\t��й�ȣ �Է�: ");
						scanf("%d%*c", &inputpass); printf("\n");
							if (inputpass == user[person].pass)
								{
									printf("\n\n");
									printf("\t\tȸ�����̽ó׿�~ �氡�氡!!^^\n\n");
									system("pause");
									system("cls");
									break;
								}
							if (i == 4)
								{	
									printf("%c", beep);
									printf("\t\t����� ���ĺ��°� ������~ \n\n");
									return 0;
								}
						i++;
							if (inputpass != user[person].pass)
								{
									printf("\t\t��й�ȣ ����ġ!\n\t  ( ��й�ȣã�� -->[1] ����Է� -->[2] )");
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
				 printf("\t\t��й�ȣ �Է�: ");
				 scanf("%d%*c", &inputpass); printf("\n");
				 if (inputpass == user[person].pass)
				 {
					 printf("\n\n");
					 printf("\t\tȸ�����̽ó׿�~ �氡�氡!!^^\n\n");
					 system("pause");
					 system("cls");
					
				 }
				 else {
					 printf("\t\t��� ã���̴µ�,,,������̳�����...\n\n \t\t�̹��� ���帱�Կ�!\n\n");
					 system("pause");
					 system("cls");
				 }
						break;
			}
	}
							//�޴� ����
	while (1) {
		printf("\n\n\n\n");
		printf("\t\t#### �뵷 ���� ���α׷�#### \n\n");
		printf("\t\t1. �Է� \n\n");
		printf("\t\t2. ���� \n\n");
		printf("\t\t3. ��¥���� �˻� \n\n");
		printf("\t\t4. �׸񺰷� �˻� \n\n");
		printf("\t\t5. ��ü ��� \n\n");
		printf("\t\t6. ä������ \n\n");
		printf("\t\t7. �����ϰ� ������ \n\n");
		printf("\n");
		printf("\t\t�Է����ּ���(1~6): ");
		input = getchar(); getchar(); printf("\n");
		system("pause");
		system("cls");

		switch (input)
		{
		case '1':
			printf("\n\n\n\n");
			printf("\t\t\t  [�Է�] \n\n");
			printf("\t\t (��¥ �Է� ���� : 11.03)\n\n");
			insert(user, person, &count[person]);
			if (count[person] > 1)
			soltdate(user, person, &count[person]);
			system("pause");
			system("cls");

			break;

		case '2':
			printf("\t[����] \n");
			deleted(user,person, &count[person]);
			system("pause");
			system("cls");
			break;
		case '3':
			printf("\n\n\n\n");
			printf("\t\t\t  [��¥���� �˻�] \n");
			search(user,person, &count[person]);
			system("pause");
			system("cls");
			break;
		case '4':
			printf("\n\n\n\n");
			printf("\t\t\t  [�׸񺰷� �˻�] \n");
			//categoryprint(user, person, count[person]);
			system("pause");
			system("cls");
			break;
		case '5' :
			printf("\n\n\n\n");
			printf("\t\t\t  [��ü���] \n\n");
			printAll(user, person,count[person]);
			system("pause");
			system("cls");
			break;
		case '6':
			printf("\n\n\n\n");
			printf("\t\t\t  [ä�� ����] \n\n");
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
			printf("\t\t\t  \n�߸� �Է��߽��ϴ�. �ٽ��Է����ּ���");
			system("pause");
			system("cls");
		}
	}
	return 0;
}