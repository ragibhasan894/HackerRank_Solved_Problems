#include<stdio.h>

#define Max_N 100001

int N;
int T;
int Width[Max_N];
int i, j;

int getMin(int a, int b) {
	int k, m=3;
	for (k = a; k <= b; k++) {
		if (Width[k] < m) {
			m = Width[k];
		}
	}
	return m;
}

void solve(int a, int b) {
	int min;
	min = getMin(a, b);
	
	printf("%d\n", min);
}

void readCase() {
	int k;
	scanf("%d %d", &N, &T);
	for (k = 0; k < N; k++) {
		scanf("%d", &Width[k]);
	}
	for (k = 0; k < T; k++) {
		scanf("%d %d", &i, &j);
		solve(i, j);
	}
}

int main() {

	readCase();

	return 0;
}