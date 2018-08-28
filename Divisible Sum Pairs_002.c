#include<stdio.h>

#define Max_N 101

int N;
int K;
int A[Max_N];
int Count = 0;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int i, j;
	int S;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i < j) {
				S = A[i] + A[j];
				if (S%K == 0) {
					Count++;
				}
			}
		}
	}
}

void printCase() {
	printf("%d\n", Count);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}