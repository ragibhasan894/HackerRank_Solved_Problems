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

void solve(int i) {
	if (i == N) {
		return;
	}
	if (Height[i] == Max) {
		Count++;
	}
	solve(i+1);
}

void solveCase() {
	Count = 0;
	solve(0);
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