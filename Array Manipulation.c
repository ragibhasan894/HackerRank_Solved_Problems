// TLE

#include<stdio.h>

#define Max_N 10000001

long int N;
long int M;
long int A;
long int B;
long int K;
long int Max = 0;
long int Arr[Max_N] = {0};

void solveCase();

void readCase() {
	int i;
	scanf("%ld%ld", &N, &M);
	for (i = 0; i < M; i++) {
		scanf("%ld%ld%ld", &A, &B, &K);
		solveCase();
	}
}

void solveCase() {
	int i;
	for (i = A - 1; i < B; i++) {
		Arr[i] += K;
		if (Arr[i] > Max) {
			Max = Arr[i];
		}
	}
}




int main() {

	freopen("input.txt", "r", stdin);

	readCase();

	printf("%ld\n", Max);

	return 0;
}