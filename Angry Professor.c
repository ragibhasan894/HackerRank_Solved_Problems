#include<stdio.h>

#define Max_N 1001

int N;
int K;
int T;
int A[Max_N];
int P;

void solve(int k, int p) {
	if (p < k) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}

void readCase() {
	int i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &N, &K);
		P = 0;
		for (j = 0; j < N; j++) {
			scanf("%d", &A[j]);
			if (A[j] <= 0) {
				P++;
			}
		}
		solve(K, P);
	}
}

int main() {

	readCase();

	return 0;
}