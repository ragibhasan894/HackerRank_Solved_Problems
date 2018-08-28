#include<stdio.h>

#define Size 1001

int T;
int N[Size];
int C[Size];
int M[Size];

void solve(int n, int c, int m) {
	int eaten;
	int choks = n/c;
	if (choks == m) {
		printf("%d\n", choks + 1);
	}
	else if (choks < m) {
		printf("%d\n", choks);
	}
	else {
		eaten = choks;
		while (choks >= m) {
			choks -= m;
			eaten++;
			choks++;
		}
		printf("%d\n", eaten);
	}
}

void readCase() {
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d %d", &N[i], &C[i], &M[i]);
		solve(N[i], C[i], M[i]);
	}
}

void solveCase() {

}

void printCase() {

}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}