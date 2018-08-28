#include<stdio.h>

int N;
int A[10000000];
int Positive=0;
int Negative=0;
int Zero=0;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (A[i] < 0) {
			Negative++;
		}
		else if (A[i] == 0) {
			Zero++;
		}
		else {
			Positive++;
		}
	}
}

void solveCase() {
	float p, n, z;
	p = (float)Positive / (float)N;
	n = (float)Negative / (float)N;
	z = (float)Zero / (float)N;
	printf("%f\n%f\n%f\n", p, n, z);
}

int main() {

	readCase();

	solveCase();

	return 0;
}