#include<stdio.h>

#define Max_N 101

int N;
int S[Max_N];
int D;
int M;
int Ans;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &S[i]);
	}
	scanf("%d %d", &D, &M);
}

void solve(int i, int j, int t) {
	if (i == N) {
		return;
	}
	for (j = i; j < i + M; j++) {
		t += S[j];
	}
	if (t == D) {
		Ans++;
	}
	solve(i + 1, j, 0);
}

void solveCase() {
	Ans = 0;
	solve(0, 0, 0);
}

void printCase() {
	printf("%d\n", Ans);
}


int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}