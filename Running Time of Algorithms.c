#include<stdio.h>

#define Max_N 1002

int N;
int A[Max_N];
int TotalShift;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int i, j, key;
	TotalShift = 0;
	for (i = 1; i < N; i++) {
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			j = j - 1;
			TotalShift++;
		}
		A[j + 1] = key;
	}
}

void printCase() {
	printf("%d\n", TotalShift);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}