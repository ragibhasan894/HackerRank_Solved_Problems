#include<stdio.h>

#define Max 11

int N;
int M;
int A[Max];
int B[Max];
int Min_B = 100;
int Min_A = 100;
int Count = 0;

void readCase() {
	int i;
	scanf("%d%d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (Min_A > A[i]) {
			Min_A = A[i];
		}
	}
	for (i = 0; i < M; i++) {
		scanf("%d", &B[i]);
		if (Min_B > B[i]) {
			Min_B = B[i];
		}
	}
}

void solveCase() {
	int i,j,k;
	int chk1,chk2;
	for (i = Min_A; i <= Min_B; i++) {
		chk1 = 0;
		chk2 = 0;
		for (j = 0; j < M; j++) {
			if (B[j] % i != 0) {
				chk1 = 1;
				break;
			}
		}
		for (k = 0; k < N; k++) {
			if (i%A[k] != 0) {
				chk2 = 1;
				break;
			}
		}
		if (chk1 == 0 && chk2 == 0) {
			Count++;
		}
	}
	printf("%d\n", Count);
}


int main() {

	readCase();

	solveCase();

	return 0;
}