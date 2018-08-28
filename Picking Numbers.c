#include<stdio.h>

#define Max_N 101

int N;
int A[Max_N];
int Max;

void readCase() {
	int i;
	int k;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &k);
		A[k]++;
	}
}

void solveCase() {
	int i;
	Max = 0;
	for (i = 0; i < N; i++) {
		if (A[i] + A[i + 1]>Max) {
			Max = A[i] + A[i + 1];
		}
	}
}

void printCase() {
	printf("%d\n", Max);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}