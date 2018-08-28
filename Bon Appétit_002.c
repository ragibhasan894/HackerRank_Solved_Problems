#include<stdio.h>

#define Max_N 100001

int N;
int K;
int A[Max_N];
int B;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &B);
}

void solveCase() {
	int i, j;
	int sum = 0;
	int Br;
	for (i = 0; i < N; i++) {
		if (i == K) {
			continue;
		}
		sum += A[i];
	}
	Br = sum / 2;

	if (Br < B) {
		printf("%d\n", B - Br);
	}
	else {
		printf("Bon Appetit\n");
	}
}

void printCase() {
	
}


int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}