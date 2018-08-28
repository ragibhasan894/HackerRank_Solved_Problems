#include<stdio.h>

int A[6][6];
int Left;
int Right;
int Top;
int Max;

void readCase() {
	int i, j;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			scanf("%d", &A[i][j]);
		}
	}
}

int sumR1(int i, int j) {
	int k, m;
	int val = 0;
	for (k = j; k <= j + 2; k++) {
		val += A[i][k];
	}
	return val;
}

int sumR2(int i, int j) {
	int k, m;
	k = i + 2;
	int val = 0;
	for (m = j; m <= j + 2; m++) {
		val += A[k][m];
	}
	return val;
}

int sumR3(int i, int j) {
	int val = A[i+1][j+1];
	
	return val;
}


void solveCase() {
	int i, j;
	int r1,r2,r3;
	int total;
	Max = -60;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			r1 = sumR1(i,j);
			r2 = sumR2(i,j);
			r3 = sumR3(i,j);
			total = r1 + r2 + r3;
			
			if (total > Max) {
				Max = total;
			}
		}
	}
}

void printCase() {
	printf("%d\n", Max);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}