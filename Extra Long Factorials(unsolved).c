#include<stdio.h>

int N;
long long int Ans;

long long int Fact(n) {
	if (n == 2) {
		return n;
	}
	return n*Fact(n - 1);
}

void readCase() {
	scanf("%d", &N);
}

void solveCase() {
	Ans = Fact(N);
}

void printCase() {
	printf("%lld\n", Ans);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}