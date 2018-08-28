#include<stdio.h>
#define Max_N 100001

int N;
int K;
int Q;
int A[Max_N];
int B[Max_N];

void Rotate(int A[],int k) {
	if (k == 0) {
		return;
	}
	int i;
	for (i = 0; i < N - 2; i++) {
		B[i + 1] = A[i];
	}
	B[0] = A[N - 1];
	k--;
	Rotate(B, k);
}

void readCase() {
	int i;
	scanf("%d %d %d", &N, &K, &Q);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	Rotate(A,K);
}

void solveCase() {
	int i;
	for (i = 0; i < N; i++) printf("%d ", A[i]);
}

int main() {

	readCase();
	solveCase();

	return 0;
}