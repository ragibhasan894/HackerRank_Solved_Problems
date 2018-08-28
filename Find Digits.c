#include<stdio.h>

int T;
long int N;
int Count;

void solve(long int n) {
	long int val = n;
	int rem;
	while (n >= 1) {
		rem = n % 10;
		n = n / 10;
		if (rem>0 && val % rem == 0) {
			Count++;
		}
	}
	printf("%d\n", Count);
}

void readCase() {
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%ld", &N);
		Count = 0;
		solve(N);
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