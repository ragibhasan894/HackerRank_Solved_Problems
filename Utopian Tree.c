#include<stdio.h>

int N, T;

void solve() {
	int i;
	int res = 1;
	for (i = 1; i <= N; i++) {
		if (i % 2 != 0) {
			res *= 2;
		}
		else  {
			res += 1;
		}
	}
	printf("%d\n", res);
}

void readCase() {
	int i;
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		scanf("%d", &N);
		solve();
	}
}

int main() {

	readCase();

	return 0;
}