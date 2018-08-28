#include<stdio.h>

#define Size 11

int N;
int M;
int A[Size];
int B[Size];
int C[101];
int MinA;
int MinB;
int indx = 0;

void PushC(int n) {
	printf("%d ", n);
	C[indx] = n;
	indx++;
}

void readCase() {
	int i;
	MinB = 100;
	MinA = 100;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (A[i] < MinA) {
			MinA = A[i];
		}
	}
	for (i = 0; i < M; i++) {
		scanf("%d", &B[i]);
		if (B[i] < MinB) {
			MinB = B[i];
		}
	}
	A[N] = MinB;
	N++;
}

void solveCase() {
	int i, j;
	int ck;
	for (i = MinA; i <= MinB; i++) {
		ck = 0;
		for (j = 0; j < N; j++) {
			if (i%A[j] != 0) {
				ck = 1;
				break;
			}
		}
		if (ck == 0) {
			PushC(i);
		}
	}
}

void printCase() {
	
}

int main() {

	readCase();

	solveCase();

	//printCase();

	return 0;
}