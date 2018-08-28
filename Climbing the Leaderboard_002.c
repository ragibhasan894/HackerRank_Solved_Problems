// Couldn't solve it .. 

#include<stdio.h>

#define Max_N 200001

int N;
int M;
int K;
int A[Max_N];
int B[Max_N];
int C[Max_N];

int check(int k) {
	int i;
	int f = 0;
	for (i = 0; C[i] != '\0'; i++) {
		if (C[i] == k) {
			f = 1;
			break;
		}
	}
	return f;
}

int binCheck(int n, int lft, int rht) {
	int mid;
	int f = 0;
	if (lft <= rht) {
		mid = lft + (rht - lft) / 2;

		if (n == C[mid]) {
			f = 1;
			return f;
		}
		if (n < C[mid]) {
			return binCheck(n, mid+1, rht);
		}

		return binCheck(n, lft, mid - 1);
	}
	return f;
}

void readCase() {
	int i, j=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d",&A[i]);
		if (binCheck(A[i],0,j) == 0) {
			C[j] = A[i];
			j++;
		}
		//printf("j=%d C[%d]=%d\n", j, j - 1, C[j - 1]);
	}
	//printf("j=%d C[%d]=%d\n", j,j-1,C[j-1]);
	K = j;
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%d", &B[i]);
	}
}

void solveCase() {
	int rank;
	int i, j;
	for (j = 0; j < M; j++) {
		for (i = K-1; i>=0; i--) {
			if (B[j] < C[K-1]) {
				rank = K+1;
				break;
			}
			if (B[j] == C[K - 1]) {
				rank = K;
				break;
			}
			if (B[j] > C[0]) {
				rank = 1;
				break;
			}
			if (B[j] <= C[i] && B[j]>C[i + 1]) {
				rank = i + 1;
			}
			if (B[j] < C[i] && B[j] >= C[i + 1]) {
				rank = i + 2;
			}
		}
		printf("%d\n", rank);
	}	
}

int main() {

	readCase();

	solveCase();

	return 0;
}