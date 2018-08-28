#include<stdio.h>

long int I, J, K;
int Count;

void readCase() {
	scanf("%ld %ld %ld", &I, &J, &K);
}

long int Rev(long int n) {
	long int x = n;
	long int rem = 0, sum = 0;
	while (x != 0) {
		rem = x % 10;
		sum = (sum * 10) + rem;
		x = x / 10;
	}
	return sum;
}

long int Abs(long int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

void solve(long int n) {
	long int r;
	long int dif;
	r = Rev(n);
	dif = Abs(n - r);

	if (dif%K == 0) {
		Count++;
	}
}

void solveCase() {
	long int i;
	Count = 0;
	for (i = I; i <= J; i++) {
		solve(i);
	}
}

void printCase() {
	printf("%d\n", Count);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}