#include<stdio.h>

int T;
long long int A, B;
int Count;

void checkSqr(long long int n, int i) {
	if (i*i > n) {
		return;
	}
	if (i*i == n) {
		Count++;
		return;
	}
	checkSqr(n, i + 1);
}

void solve() {
	Count = 0;
	long long int i;
	for (i = A; i <= B; i++) {
		checkSqr(i, 1);
	}
	printf("%d\n", Count);
}

void readCase() {
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%lld %lld", &A, &B);
		solve();
	}
}

int main() {

	readCase();

	return 0;
}