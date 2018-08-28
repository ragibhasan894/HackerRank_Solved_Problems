#include<stdio.h>

#define Max_N 101

int N;
int K;
int H[Max_N];
int Max;
int totalDrinks;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &H[i]);
	}
}

void solveCase() {
	int i;
	Max = 1;
	totalDrinks = 0;
	for (i = 0; i < N; i++) {
		if (H[i] > Max) {
			Max = H[i];
		}
	}
	totalDrinks = Max - K;
}

void printCase() {
	if (totalDrinks > 0) {
		printf("%d\n", totalDrinks);
	}
	else {
		printf("0\n");
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}