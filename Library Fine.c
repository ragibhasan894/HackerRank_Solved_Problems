#include<stdio.h>

int D1, D2;
int M1, M2;
int Y1, Y2;
int Fine;

void readCase() {
	scanf("%d %d %d %d %d %d", &D1, &M1, &Y1, &D2, &M2, &Y2);
}

void solveCase() {
	int i;
	Fine = 0;
	if (D1 <= D2 && M1<=M2 && Y1<=Y2) {
		return;
	}
	if (D1 > D2 && M1 == M2 && Y1 == Y2) {
		Fine = (D1 - D2) * 15;
		return;
	}
	if (M1 > M2 && Y1 == Y2) {
		Fine = (M1 - M2) * 500;
		return;
	}
	if (Y1 > Y2) {
		Fine = 10000;
		return;
	}
}

void printCase() {
	printf("%d\n", Fine);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}