#include<stdio.h>

int N;
int numberOfPeople;
int initialPeople;
int likedPeople;

void readCase() {
	scanf("%d", &N);
}

void solveCase() {
	int i;
	initialPeople = 5;
	likedPeople = 0;
	for (i = 1; i <= N; i++) {
		initialPeople = initialPeople / 2;
		likedPeople += initialPeople;
		initialPeople = initialPeople * 3;
	}
}

void printCase() {
	printf("%d\n", likedPeople);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}