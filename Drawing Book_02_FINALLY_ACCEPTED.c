#include<stdio.h>

int N;
int P;
int frontPage;
int lastPage;
int Count1;
int Count2;

void readCase() {
	scanf("%d %d", &N, &P);
}

void solveCase() {
	frontPage = 1;
	lastPage = N;
	Count1 = Count2 = 0;
	int i;
	for (i = frontPage; i < N; i += 2) {
		if (i > frontPage) {
			Count1++;
		}
		if (i == P || i - 1 == P) {
			break;
		}
	}
	/*
	for (i = lastPage; i >= frontPage; i -= 2) {
		if (i == P || i + 1 == P || i - 1 == P) {
			break;
		}
		Count2++;
	}
	*/
	if (N % 2 == 0) {
		for (i = lastPage; i > frontPage; i -= 2) {
			if (i < lastPage) {
				Count2++;
			}
			if (i == P || i + 1 == P) {
				break;
			}
		}
	}
	else {
		for (i = lastPage; i > frontPage; i -= 2) {
			if (i < lastPage - 1) {
				Count2++;
			}
			if (i == P || i - 1 == P) {
				break;
			}
		}
	}
}

void printCase() {
	if (Count1 < Count2) {
		printf("%d\n", Count1);
	}
	else {
		printf("%d\n", Count2);
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}