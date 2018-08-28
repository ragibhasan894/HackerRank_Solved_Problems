#include<stdio.h>

int N, K;
int L, T;
int Luck;
int Maxm[101];
int mxsize = 0;

void Push(int val) {
	Maxm[mxsize] = val;
	mxsize++;
}

void readCase() {
	int i;
	Luck = 0;
	scanf("%d %d", &N, &K);
	for (i = 1; i <= N; i++) {
		scanf("%d %d", &L, &T);
		if (T == 0) {
			Luck += L;
		}
		else {
			Push(L);
		}
	}
}

void solveCase() {
	int i, j;
	int t;
	int mx = K;
	for (i = 0; i < mxsize; i++) {
		for (j = 1; j < mxsize; j++) {
			if (Maxm[j - 1] < Maxm[j]) {
				t = Maxm[j - 1];
				Maxm[j - 1] = Maxm[j];
				Maxm[j] = t;
			}
		}
	}
	for (i = 0; i < mxsize; i++) {
		if (mx == 0) {
			break;
		}
		Luck += Maxm[i];
		Maxm[i] = 0;
		mx--;
	}
	for (i = mxsize - 1; Maxm[i] != 0; i--) {
		Luck -= Maxm[i];
	}
}

void printCase() {
	printf("%d\n", Luck);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}