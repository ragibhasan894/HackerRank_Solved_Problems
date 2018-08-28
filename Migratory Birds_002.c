#include<stdio.h>

int N;
int A[6];
int Max = 0;
int MaxIndx;

void readCase() {
	int i;
	int Birds;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &Birds);
		A[Birds]++;
	}
}

void solve(int i) {
	if (i > 5) {
		return;
	}
	if (A[i] > Max) {
		Max = A[i];
		MaxIndx = i;
	}
	solve(i + 1);
}

void solveCase() {
	solve(1);
}

void printCase() {
	printf("%d\n", MaxIndx);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}