#include<stdio.h>

#define Max_N 101

int N;
int K;
int A[Max_N];
int Count;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	Count = 0;
}

void solveCase() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 1; j < N; j++) {
			if (i < j) {
				if ((A[i] + A[j]) % K == 0) {
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