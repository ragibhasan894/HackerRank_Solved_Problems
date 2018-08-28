#include<stdio.h>

#define Max_N 100001

int N;
long int A[Max_N];
long int Min;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%ld", &A[i]);
	}
}

long int Abs(long int n) {
	if (n < 0) {
		return -n;
	}
	else {
		return n;
	}
}

void solveCase() {
	int i, j;
	Min = 1000000000;
	for (i = 0; i < N; i++) {
		for (j = i; j < N; j++) {
			if (i != j && Abs(A[i]-A[j])<Min) {
				Min = Abs(A[i] - A[j]);
			}
		}
	}
}

void printCase() {
	printf("%ld\n", Min);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}