// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include "toan.h"

int main() {
	printf("nhap vao so cua bang cuu chuong: ");
	int a;
	int c;
	scanf_s("%d", &a);
	int b = 10;
	for (int i = 1; i <= b; i++) {
		c = a * i;
		printf(" %d * %d = % d\n", a, i, c);
	}
	
}
