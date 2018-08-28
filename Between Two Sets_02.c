#include<stdio.h>

#define Max_Size 11

int N;
int M;
int A[Max_Size];
int B[Max_Size];
int minB = 100;
int C[Max_Size];
int sizeC = 0;
int Count;
int maxA = 1;


void readCase() {
	int i;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (maxA < A[i]) {
			maxA = A[i];
		}
	}
	for (i = 0; i < M; i++) {
		scanf("%d", &B[i]);
		if (minB > B[i]) {
			minB = B[i];
		}
	}
	Count = 0;
}

void Push(int i) {
	C[sizeC] = i;
	sizeC++;
}

void solveCase() {
	int i,j;
	int chk = 0;
	for (i = maxA; i <= minB; i++) {
		for (j = 0; j < N; j++) {
			if (i%A[j] != 0) {
				chk = 1;
				break;
			}
		}
		if (chk == 0) {
			Push(i);
		}
		chk = 0;
	}
	chk = 0;
	for (i = 0; C[i]!='\0'; i++) {
		for (j = 0; j < M; j++) {
			if (B[j] % C[i] != 0) {
				chk = 1;
				break;
			}
		}
		if (chk == 0) {
			printf("%d->", C[i]);
			Count++;
		}
		chk = 0;
	}
}

void printCase() {
	printf("%d\n", Count);
}


int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}