#include<stdio.h>

#define Max_N 11

int N;
long long int A[Max_N];
long long int Sum;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
}

void solveCase() {
	int i;
	Sum = 0;
	for (i = 0; i < N; i++) {
		Sum += A[i];
	}
}

void printCase() {
	printf("%lld\n", Sum);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}