#include<stdio.h>

int Q;
int X, Y, Z;

int Abs(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

void solve(int x, int y, int z) {
	if (Abs(x - z) == Abs(y - z)) {
		printf("Mouse C\n");
	}
	else if (Abs(x - z) < Abs(y - z)) {
		printf("Cat A\n");
	}
	else {
		printf("Cat B\n");
	}
}

void readCase() {
	int i;
	scanf("%d", &Q);
	for (i = 0; i < Q; i++) {
		scanf("%d %d %d", &X, &Y, &Z);
		solve(X, Y, Z);
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