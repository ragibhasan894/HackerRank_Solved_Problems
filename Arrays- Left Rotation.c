#include<stdio.h>

#define Max_N 100001

int A[Max_N];
int B[Max_N];
int D;
int N;
int Count;


void readCase() {
	int i;
	scanf("%d %d", &N, &D);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void Rotate() {
	int i;
	int j = 0;
	int firstValue = A[0];
	for (i = 1; i < N; i++) {
		B[j] = A[i];
		j++;
	}
	B[j] = A[0];
}

void solveCase(int A[],int Count) {
	if (Count == D) {
		return;
	}
	int i;
	int j = 0;
	int lastValue = A[0];
	for (i = 1; i < N; i++) {
		B[j] = A[i];
		j++;
	}
	B[j] = lastValue;
	solveCase(B,Count+1);
	
}

void printCase() {
	int i;
	for (i = 0; i < N; i++) {
		printf("%d ", B[i]);
	}
}


int main() {
	readCase();
	solveCase(A,0);
	printCase();

	return 0;
}