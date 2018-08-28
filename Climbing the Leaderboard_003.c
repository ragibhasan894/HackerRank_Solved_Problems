#include<stdio.h>

#define Max_N 200001

int N;
long int A[Max_N];
int M;
long int B[Max_N];
long int Lvl[Max_N];
int L;
long int Max, Min;


void readCase() {
	int i;
	int j = 0;
	L = 0;
	int temp;
	Max = 0;
	Min = 1000000000;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%ld", &A[i]);
		if (A[i] > Max) {
			Max = A[i];
		}
		if (A[i] < Min) {
			Min = A[i];
		}
		temp = A[i];
		if (i > 0 && temp != Lvl[j]) {
			j++;
			L++;
			Lvl[j] = temp;
		}
		if (i == 0) {
			Lvl[j] = temp;
		}
	}
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%ld", &B[i]);
	}
}

void solveCase() {
	int i, j;
	int k;
	for (i = 0; i < M; i++) {
		k = 0;
		for (j = L; j >= 0; j--) {
			if (B[i] >= Max) {
				printf("1\n");
				break;
			}
			if (B[i] <= Min) {
				printf("%d\n", L+2);
				break;
			}
			if (B[i] < Lvl[j]) {
				printf("%d\n", j + 2);
				break;
			}
		}
	}
}

void printCase() {
	int i;
	for (i = 0; i <= L; i++) {
		printf("%ld ", Lvl[i]);
	}
}

int main() {

	readCase();

	solveCase();

	//printCase();

	return 0;
}