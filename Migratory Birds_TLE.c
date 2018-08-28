#include<stdio.h>

#define Max_N 200001

int N;
int Birds[Max_N];
int A[Max_N];
int Max_type;
int Max_count;

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &Birds[i]);
	}
}

void solveCase() {
	int i,k,m;
	int t;
	int count = 0;
	Max_count = 0;
	for (i = 0; i < N; i++) {
		for (k = 0; k < N; k++) {
			if (Birds[i] == Birds[k]) {
				count++;
			}
		}
		if (count > Max_count) {
			Max_count = count;
			Max_type = Birds[i];
		}
		count = 0;
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