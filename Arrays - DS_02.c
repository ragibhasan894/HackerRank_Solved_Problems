#include<stdio.h>

#define Max_N 1001

int A[Max_N];
int N;


void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int indx = N - 1;
	
	while (indx >= 0) {
		printf("%d ", A[indx]);
		indx--;
	}
}

int main() {

	readCase();

	solveCase();

	return 0;
}