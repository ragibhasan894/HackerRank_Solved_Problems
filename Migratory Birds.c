#include<stdio.h>

#define Max_N 200001

int N;
int Birds[Max_N];
int A[6];
int Max_type;
int Max_count;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &Birds[i]);
		A[Birds[i]]++;
	}
}

void solveCase() {
	int i, k, m;
	int t;
	Max_count = 0;
	for (i = 1; i < 6; i++) {
		if (A[i] > Max_count) {
			Max_count = A[i];
			t = i;
		}
	}
	for (k = 5; k >= 1; k--) {
		if (A[k] == Max_count) {
			Max_type = k;
		}
	}

}

void printCase() {
	printf("%d\n", Max_type);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}