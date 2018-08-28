#include<stdio.h>

int x1, v1, x2, v2;

void readCase() {
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
}

void solveCase() {
	int Kg1 = x1;
	int Kg2 = x2;

	if (x1 < x2 && v1 <= v2) {
		printf("NO\n");
	}

	else {

	}
}

void printCase() {

}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}