// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include "toan.h"

int main() {
	printf("Hay nhap so can tinh tong: ");
	int d;
	scanf_s("%d", &d);
	printf("\n");
	printf("Hay nhap so can tinh giai thua: ");
	int b;
	scanf_s("%d", &b);
	printf("\n");
	int c = giaithua(b);
	int a = sum(d);
	printf("%d\n", a);
	printf("%d", c);
}
