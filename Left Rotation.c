// TLE

#include<stdio.h>

#define Max_N 100001

int N;
int D;
int A[Max_N];
int tmp;
int j;

void Rotate1(int A[]) {
	int i, temp;
	for (i = 1; i < N; i++) {
		temp = A[i - 1];
		A[i - 1] = A[i];
		A[i] = temp;
	}
}

void Rotate(int A[], int i) {
	if (i == N) {
		return;
	}
	tmp = A[i - 1];
	A[i - 1] = A[i];
	A[i] = tmp;

	Rotate(A, i + 1);
}

void readCase() {
	int i;
	scanf("%d%d", &N, &D);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}


void solveCase() {
	int i;
	for (i = 0; i < D; i++) {
		Rotate(A, 1);
	}
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main() {

	readCase();

	solveCase();

	return 0;
}