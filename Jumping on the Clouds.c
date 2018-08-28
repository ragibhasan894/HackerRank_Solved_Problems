#include<stdio.h>

#define Max_N 101

int N;
int A[Max_N];
int Jump;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int i;
	Jump = 0;
	i = 0;
	while(i <= N - 1) {
		if (i == N - 1) {
			break;
		}
		else if (A[i + 2] == 1 && A[i + 1] == 1) {
			break;
		}
		else if (A[i + 2] == 0 && A[i+1] == 1) {
			Jump++;
			i += 2;
		}
		else if (A[i + 2] == 1 && A[i + 1] == 0) {
			Jump++;
			i++;
		}
		else {
			Jump++;
			i += 2;
		}
	}
}

void printCase() {
	printf("%d\n", Jump);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}