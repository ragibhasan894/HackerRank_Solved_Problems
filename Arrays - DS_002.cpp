#include<stdio.h>

#define Max_N 1001

int N;
int A[Max_N];

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solve(int n) {
	if (n == -1) {
		return;
	}
	printf("%d ", A[n]);
	solve(n - 1);
}

void solveCase() {
	solve(N - 1);
}

int main() {

	readCase();

	solveCase();

	return 0;
}