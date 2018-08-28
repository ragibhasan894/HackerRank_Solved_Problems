#include<stdio.h>

#define Max_N 100001

int N, D;
int A[Max_N];
int B[Max_N];

void readCase() {
	int i;
	scanf("%d %d", &N, &D);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void Operation() {
	int i, t;
	int j = 0;
	t = A[0];
	for (i = 1; i < N; i++) {
		A[j] = A[i];
		j++;
	}
	A[j] = t;
}

void solveCase() {
	int i;
	for (i = 0; i < D; i++) {
		Operation();
	}
}

void printCase() {
	int i;
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}