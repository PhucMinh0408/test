#include "toan.h"

int sum(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	return sum;
}
int giaithua(int c) {
	int giaithua = 1;
	for (int i = 1;i <= c;i++) {
		giaithua = giaithua * i;
	}
	return giaithua;
}