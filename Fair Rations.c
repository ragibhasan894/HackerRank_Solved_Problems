#include<stdio.h>

#define Max_N 1001

int N;
int B[Max_N];
int Loaf;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &B[i]);
	}
}

void solve(int i) {
	B[i]++;
	B[i + 1]++;
	Loaf += 2;
}

void solveCase() {
	int i;
	Loaf = 0;
	for (i = 0; i < N; i++) {
		if (B[i] % 2 != 0 && i<N-1) {
			solve(i);
		}
	}
}

void printCase() {
	int i;
	int ck = 0;
	for (i = 0; i < N; i++) {
		if (B[i] % 2 != 0) {
			ck = 1;
			break;
		}
	}
	if (ck == 0) {
		printf("%d\n", Loaf);
	}
	else {
		printf("NO\n");
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}