#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Çì´õ.h"

void soltdate(USER* ptr, int num, int *count) {

	int temp = *count;
	char temp2[30];
	for (int i = temp; i > 0; i--)
		if (strcmp(ptr[num].s[i-1].date, ptr[num].s[i].date) == 1)
		{	
			strcpy(temp2,ptr[num].s[i].date);
			strcpy(ptr[num].s[i].date,ptr[num].s[i - 1].date);
			strcpy(ptr[num].s[i - 1].date, temp2);
			SWAP(&ptr[num].s[i].food, &ptr[num].s[i-1].food);
			SWAP(&ptr[num].s[i].trans, &ptr[num].s[i - 1].trans);
			SWAP(&ptr[num].s[i].pc, &ptr[num].s[i - 1].pc);
			SWAP(&ptr[num].s[i].etc, &ptr[num].s[i - 1].etc);
		}

			


}
