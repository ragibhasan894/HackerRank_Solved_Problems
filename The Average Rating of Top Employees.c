#include<stdio.h>

#define Max_N 201

int N;
int E[Max_N];
int C;
int Sum;
float Ans;

void readCase() {
	int i;
	C = 0;
	Sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &E[i]);
		if (E[i] >= 90) {
			C++;
			Sum += E[i];
		}
	}
}

void solveCase() {
	Ans = (float)Sum / C;
}

void printCase() {
	printf("%.2f\n", Ans);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}