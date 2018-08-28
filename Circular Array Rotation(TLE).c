#include<stdio.h>

#define Max_N 100001

int N;
int K;
int Q;
int M;
int A[Max_N];

void Rotate() {
	int i, j;
	for (j = 0; j < K; j++) {
		int lastVal = A[N - 1];
		for (i = N - 2; i >= 0; i--) {
			A[i + 1] = A[i];
		}
		A[0] = lastVal;
	}
}

void readCase() {
	int i;
	scanf("%d %d %d", &N, &K, &Q);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	Rotate();
	for (i = 0; i < Q; i++) {
		scanf("%d", &M);
		printf("%d\n", A[M]);
	}
}

void solveCase() {

}

void printCase() {

}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}