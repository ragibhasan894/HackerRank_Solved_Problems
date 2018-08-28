#include<stdio.h>

int A[4];
int B[4];
int Alice;
int Bob;

void readCase() {
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%d", &A[i]);
	}
	for (i = 0; i < 3; i++) {
		scanf("%d", &B[i]);
	}
}

void solveCase() {
	int i;
	Alice = 0;
	Bob = 0;
	for (i = 0; i < 3; i++) {
		if (A[i] > B[i]) {
			Alice++;
		}
		if (A[i] < B[i]) {
			Bob++;
		}
	}
}

void printCase() {
	printf("%d %d\n", Alice, Bob);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}