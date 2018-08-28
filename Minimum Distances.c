#include<stdio.h>

#define Max_N 1001

int N;
int A[Max_N];
int Min;
int Ck;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

int Abs(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

void solveCase() {
	int i, j;
	int temp;
	Min = 100000;
	Ck = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i != j && A[i] == A[j]) {
				temp = Abs(i - j);
				if (temp < Min) {
					Min = temp;
					Ck = 1;
				}
			}
		}
	}
}

void printCase() {
	if (Ck == 1) {
		printf("%d\n", Min);
	}
	else {
		printf("-1\n");
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}