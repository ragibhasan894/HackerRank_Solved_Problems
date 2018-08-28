#include<stdio.h>

#define Max_N 100001

int N;
long int Height[Max_N];
long int Max;
int Count;

void readCase() {
	int i;
	Max = 1;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%ld", &Height[i]);
		if (Height[i] > Max) {
			Max = Height[i];
		}
	}
}

void solveCase() {
	int i;
	Count = 0;
	for (i = 0; i < N; i++) {
		if (Height[i] == Max) {
			Count++;
		}
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