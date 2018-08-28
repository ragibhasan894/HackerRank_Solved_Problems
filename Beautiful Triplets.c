#include<stdio.h>

#define Max_N 10001

int N;
int D;
int A[Max_N];
int T;

void readCase() {
	int i;
	scanf("%d %d", &N, &D);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int i, j, k, ai, aj, ak;
	T = 0;
	int tripcount;
	for (i = N-1; i >= 0; i--) {
		ai = A[i];
		for (j = i - 1; j >= 0; j--) {
			if (A[i] - A[j] == D) {
				aj = A[j];
				for (k = j; k >= 0; k--) {
					if (A[j] - A[k] == D) {
						T++;
						break;
					}
				}
				break;
			}
		}
	}
}

void printCase() {
	printf("%d\n", T);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}