#include<stdio.h>

#define Size 100001

int S;
int T;
int A;
int B;
int M;
int N;
int Apple[Size];
int Orange[Size];
int R;
int L;

void readCase() {
	int i;
	scanf("%d %d", &S, &T);
	scanf("%d %d", &A, &B);
	scanf("%d %d", &M, &N);
	for (i = 0; i < M; i++) {
		scanf("%d", &Apple[i]);
	}
	for (i = 0; i < N; i++) {
		scanf("%d", &Orange[i]);
	}
}

void solveCase() {
	int i;
	L = 0;
	R = 0;
	for (i = 0; i < M; i++) {
		if (S <= Apple[i] + A && T >= Apple[i] + A) {
			L++;
		}
	}
	for (i = 0; i < N; i++) {
		if (S <= Orange[i] + B && T >= Orange[i] + B) {
			R++;
		}
	}
}

void printCase() {
	printf("%d\n%d\n", L, R);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}