#include<stdio.h>

#define Max_N 1001

int N;
long int S[Max_N];
long int Min;
long int Max;
int MaxCount = 0;
int MinCount = 0;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%ld", &S[i]);
	}
}

void solveCase() {
	int i;
	Max = S[0];
	Min = S[0];
	for (i = 0; i < N; i++) {
		if (S[i] > Max) {
			Max = S[i];
			MaxCount++;
		}
		if (S[i] < Min) {
			Min = S[i];
			MinCount++;
		}
	}
}

void printCase() {
	printf("%d %d\n", MaxCount, MinCount);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}