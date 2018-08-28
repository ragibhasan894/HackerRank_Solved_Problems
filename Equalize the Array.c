#include<stdio.h>

#define Max_N 101

int N;
int A[Max_N];
int Count;
int Max_count;
int Val;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int i, j, k;
	Max_count = 0;
	for (i = 0; i < N; i++) {
		Count = 0;
		for (j = 0; j < N; j++) {
			if (A[i] == A[j]) {
				Count++;
			}
		}
		if (Count > Max_count) {
			Max_count = Count;
			Val = A[i];
		}
	}
}

void printCase() {
	printf("%d\n", N - Max_count);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}