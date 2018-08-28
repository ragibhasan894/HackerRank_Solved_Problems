#include<stdio.h>

#define Max_N 101

int N;
int A[Max_N];

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase(int n) {
	if (n < 0) {
		return;
	}
	printf("%d ", A[n]);
	n--;
	solveCase(n);
}

int main() {

	readCase();
	solveCase(N-1);

	return 0;
}