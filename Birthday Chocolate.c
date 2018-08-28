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

void solve() {

}

void solveCase() {
	Ans = 0;
	int i, j;
	int t = 0;
	for (i = 0; i < N; i++) {
		for (j = i; j < i+M; j++) {
			t += S[j];
		}
		if (t == D) {
			Ans++;
		}
		t = 0;
	}
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