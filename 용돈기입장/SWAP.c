#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "���.h"

void SWAP(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}