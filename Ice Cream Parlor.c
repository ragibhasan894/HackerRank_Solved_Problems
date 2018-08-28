#include<stdio.h>

#define Max_N 10001

int T;
int M;
int N;
int C[Max_N];
int Min;
int Max;

void solve() {
	int i, j;
	int ck = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i < j && C[i] + C[j] == M) {
				Min = i+1;
				Max = j+1;
				ck = 1;
				break;
			}
		}
		if (ck == 1) {
			break;
		}
	}
	printf("%d %d\n", Min, Max);
}

void readCase() {
	int i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &M, &N);
		for (j = 0; j < N; j++) {
			scanf("%d", &C[j]);
		}
		solve();
	}
}

int main() {

	readCase();

	return 0;
}