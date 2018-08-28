#include<stdio.h>

#define Max_N 100001

int N;
int K;
long int A[Max_N];
int B[Max_N];
long int C[Max_N];
int csize;
int Size;
int Max;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%ld", &A[i]);
	}
	Max = 1;
}

void FreeC(int i) {
	if (i == N) {
		return;
	}
	C[i] = -1;
	FreeC(i + 1);
	csize = 0;
}

void Push(int n) {
	C[csize] = n;
	csize++;
}

int GetAns() {
	int i, j;
	int tmp;
	int ck = 0;
	for (i = 0; i < csize; i++) {
		for (j = 0; j < csize; j++) {
			//printf("%d ", C[j]);
			if (i != j) {
				tmp = C[i] + C[j];
				if (tmp%K == 0) {
					//printf("%d %d\n", C[i], C[j]);
					ck = 1;
					break;
				}
			}
		}
		//printf("B-%d %d\n",C[i],C[j]);
		if (ck == 1) {
			break;
		}
		//printf("c-%d %d\n", C[i], C[j]);
	}
	//printf("%d\n", csize);
	if (ck == 0) {
		return csize;
	}
	else {
		return 1;
	}
}

void print() {
	int i;
	FreeC(0);
	for (i = 0; i < N; i++) {
		if (B[i] == 1) {
			Push(A[i]);
		}
	}
	Size = GetAns();
	//printf("%d\n", Size);
	if (Size > Max) {
		Max = Size;
	}
}

void solve(int i) {
	if (i == N) {
		print();
		return;
	}
	B[i] = 0;
	solve(i + 1);
	B[i] = 1;
	solve(i + 1);
}

void solveCase() {
	solve(0);
}

void printCase() {
	printf("%d\n", Max);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}