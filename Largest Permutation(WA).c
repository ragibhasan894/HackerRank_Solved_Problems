#include<stdio.h>

#define Max_N 100001

int N;
long int K;
int A[Max_N];
int B[Max_N];
int Indx;
int Max;

void readCase() {
	int i;
	scanf("%d %ld", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		B[i] = A[i];
	}
}

void Swap() {
	int i;
	int t1, t2, t3;
	if (B[Indx] > A[Indx]) {
		t1 = B[Indx];
		for (i = 0; i < N; i++) {
			if (A[i] == t1) {
				t2 = A[i];
				A[i] = A[Indx];
				A[Indx] = t2;
			}
		}
	}
	Indx++;
}

void solveCase() {
	long int i;
	Indx = 0;
	int k, m;
	int tmp;
	for (k = 0; k < N; k++) {
		for (m = 1; m < N; m++) {
			if (B[m - 1] < B[m]) {
				tmp = B[m - 1];
				B[m - 1] = B[m];
				B[m] = tmp;
			}
		}
	}
	for (i = 0; i < K; i++) {
		Swap();
	}
}

void printCase() {
	int i;
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}