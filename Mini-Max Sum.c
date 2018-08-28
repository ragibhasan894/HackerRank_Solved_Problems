#include<stdio.h>

long int A[6];
long int Max, Min;

void readCase() {
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%ld", &A[i]);
	}
}

void solveCase() {
	int i,j;
	long int t;
	Min = Max = 0;
	for (i = 0; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			if (A[j - 1]>A[j]) {
				t = A[j];
				A[j] = A[j - 1];
				A[j - 1] = t;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		Min += A[i];
	}
	for (i = 4; i > 0; i--) {
		Max += A[i];
	}	
}

void printCase() {
	printf("%ld %ld\n", Min, Max);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}