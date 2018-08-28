#include<stdio.h>

#define Max_N 1000001

long int N;
char Hike[Max_N];
int Count;

void readCase() {
	int i;
	scanf("%ld", &N);
	for (i = 0; i < N; i++) {
		scanf(" %c", &Hike[i]);
	}
}

void solveCase() {
	int i;
	int lvl = 0;
	Count = 0;
	for (i = 0; i < N; i++) {
		if (Hike[i] == 'U') {
			lvl++;
			if (lvl == 0) {
				Count++;
			}
		}
		else {
			lvl--;
		}
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