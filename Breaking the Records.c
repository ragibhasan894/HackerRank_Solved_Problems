#include<stdio.h>

#define Max_N 1001

int N;
long int S[Max_N];
long int L;
long int H;
int totalH;
int totalL;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%ld", &S[i]);
	}
}

void solveCase() {
	L = H = S[0];
	totalH = totalL = 0;
	int i, j;
	for (i = 0; i < N; i++) {
		if (S[i] < L) {
			L = S[i];
			totalL++;
		}
		if (S[i] > H) {
			H = S[i];
			totalH++;
		}
	}
}

void printCase() {
	printf("%d %d\n", totalH, totalL);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}