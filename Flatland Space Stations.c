#include<stdio.h>

#define Max_N 100001

int N;
int M;
int A[Max_N];
int Max;

void readCase() {
	int i;
	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++) {
		scanf("%d", &A[i]);
	}
}

int Abs(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

void solveCase() {
	int i, j;
	int t;
	int min;
	Max = 0;
	for (i = 0; i < N; i++) {
		min = 100000;
		for (j = 0; j < M; j++) {
			t = Abs(i - A[j]);
			if (t < min) {
				min = t;
			}
		}
		if (min > Max) {
			Max = min;
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