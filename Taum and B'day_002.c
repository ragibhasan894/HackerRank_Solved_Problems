#include<stdio.h>

int T;
long int X, Y, B, W, Z;


void readCase() {
	scanf("%ld %ld", &B, &W);
	scanf("%ld %ld %ld", &X, &Y, &Z);
}

void solveCase() {
	int CostB, CostW;

	CostB = B * X;
	CostW = W * Y;
}

void printCase() {

}

int main() {

	int Case;

	scanf("%d", &T);

	for (Case = 1; Case <= T; Case++) {

		readCase();

		solveCase();

		printCase();

	}

	return 0;
}