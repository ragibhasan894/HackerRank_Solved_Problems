/*
Sample Input

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0

Sample Output

19
*/

#include<stdio.h>

int A[7][7];
int Sum;
int MaxSum;

void readCase() {
	int i, j;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	MaxSum = -54;
}

int GetHourSum(int i, int j) {
	int sum;
	sum = A[i][j] + A[i - 1][j - 1] + A[i - 1][j] + A[i - 1][j + 1] + A[i + 1][j - 1] + A[i + 1][j] + A[i + 1][j + 1];
	return sum;
}

void solveCase() {
	int i, j;
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			Sum = GetHourSum(i,j);
			if (Sum > MaxSum) {
				MaxSum = Sum;
			}
		}
	}
}

void printCase() {
	printf("%d\n", MaxSum);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}