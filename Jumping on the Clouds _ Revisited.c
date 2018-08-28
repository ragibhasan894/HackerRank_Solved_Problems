#include<stdio.h>

#define Max_N 26

int N;
int K;
int Clouds[Max_N];
int E = 100;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &Clouds[i]);
	}
}

void solveCase() {
	int i;
	for (i = 0; i < N; i += K) {
		if (i > 0 && Clouds[i] == 0) {
			E -= 1;
		}
		if(i > 0 && Clouds[i] == 1) {
			E -= 3;
		}
	}
	if (Clouds[0] == 0) {
		E -= 1;
	}
	if (Clouds[0] == 1) {
		E -= 3;
	}
}

void printCase() {
	printf("%d\n", E);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}