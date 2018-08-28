#include<stdio.h>

#define Max_N 101

int N;
int C[Max_N];
int Count;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &C[i]);
	}
}

void solveCase() {
	int i, j;
	int t = 0;
	Count = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i != j && C[i] == C[j]) {
				C[i] = t;
				--t;
				C[j] = t;
				--t;
				Count++;
				break;
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