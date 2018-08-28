#include<stdio.h>

#define Max_N 1001

int N;
int A[Max_N];
int Min;

void readCase() {
	int i;
	Min = 1000;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
}

void solve(int a[], int min) {
	int i;
	int chk = 0;
	int count;
	for (i = 0; i < N; i++) {
		if (A[i] > 0) {
			chk = 1;
		}
	}
	if (chk == 1) {
		count = 0;
		for (i = 0; i < N; i++) {
			if (a[i] < min && a[i]>0) {
				min = a[i];
			}
		}
		for (i = 0; i < N; i++) {
			if (a[i] >= min) {
				a[i] -= min;
				count++;
			}
		}
		printf("%d\n", count);
		solve(a, 1000);
	}
	else {
		return;
	}
}

void solveCase() {
	solve(A, Min);
}

void printCase() {

}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}