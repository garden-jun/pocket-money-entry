#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"

//��й�ȣ ã��
void findpass(USER *ptr,int num){
	//� �������� Ȯ��----> ex)��α�!��α��� sel�� �ľ�.
	char ans[30];
	
	printf("\n\n\n\n");
	printf("\t\t��й�ȣ�� ã�� �����!!?\n\n\n\n");
	
	printf("\t\t<<<<��й�ȣ ��Ʈ>>>>\n\n");
	
	switch (ptr[num].sel)
	{
		case 1:   printf("\t\t(1)�ڽ��� ���� �Ƴ��� ������?\n\n");
				

				while (1)
					{
						printf("\n\t\t�亯 :"); scanf("%s", ans); printf("\n");
						if (strcmp(ptr[num].quiz, ans) == 0)
						{
							printf("\t\t����� ��й�ȣ�� '%d'�̿���!\n\n", ptr[num].pass);
							break;
						}
						else
							printf("\t\t��!\n");
					
					}
				break;
		
		case 2:		printf("\t\t(2)�ڽ��� ���� �����ϴ� ����?\n\n");
			
		
				while (1)
					{
						printf("\n\t\t�亯 :"); scanf("%s", ans); printf("\n");
						if (strcmp(ptr[num].quiz, ans) == 0)
						{
							printf("\t\t����� ��й�ȣ�� '%d'�̿���!\n\n", ptr[num].pass);
							break;
						}
						else
							printf("\t\t��!\n");
						
					}
				break; 
		
		case 3:     printf("\t\t(3)�ڽ��� ���� �����ϴ� �����?\n\n");
					
			
				while (1)
					{
						printf("\n\t\t�亯 :"); scanf("%s", ans); printf("\n");
						if (strcmp(ptr[num].quiz, ans) == 0)
						{
							printf("\t\t����� ��й�ȣ�� '%d'�̿���!\n\n", ptr[num].pass);
							break;
						}
						else
							printf("\t\t��!\n");
						
					}
				break;
		}
	system("pause");
	system("cls");
}