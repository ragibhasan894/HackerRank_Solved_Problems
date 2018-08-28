#include<stdio.h>

int N;
int A[10000][10000];
int Left, Right;

void readCase() {
	int i,j;
	Left = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &A[i][j]);
			if (i == j) {
				Left += A[i][j];
			}
		}
	}
}

void solveCase() {
	int i,j;
	Right = 0;
	j = N - 1;
	for (i = 0; i < N; i++) {
		Right += A[i][j];
		j--;
	}
}

int Abs(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

void printCase() {
	printf("%d\n", Abs(Left - Right));
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}