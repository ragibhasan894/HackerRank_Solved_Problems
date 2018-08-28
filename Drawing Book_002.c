#include<stdio.h>

int N;
int P;
int Min;

void readCase() {
	scanf("%d %d", &N, &P);
}

void Even(int front, int back) {
	int countFront = 0;
	int countBack = 0;
	int i;
	// Count from the front Page
	for (i = front; i <= back; i += 2) {
		if (i == P) {
			break;
		}
		if (i+1 == P || i + 2 == P) {
			countFront++;
			break;
		}
		countFront++;
	}
	// Count from the back page
	for (i = back; i >= front; i-=2) {
		if (i == P) {
			break;
		}
		if (i - 1 == P || i - 2 == P) {
			countBack++;
			break;
		}
		countBack++;
	}
	if (countFront < countBack) {
		Min = countFront;
	}
	else {
		Min = countBack;
	}
}

void Odd(int front, int back) {
	int countFront = 0;
	int countBack = 0;
	int i;
	// Count from the front Page
	for (i = front; i <= back; i += 2) {
		if (i == P) {
			break;
		}
		if (i + 1 == P || i + 2 == P) {
			countFront++;
			break;
		}
		countFront++;
	}
	// Count from the back page
	for (i = back-1; i >= front; i -= 2) {
		if (back == P) {
			break;
		}
		if (i == P) {
			break;
		}
		if (i - 1 == P || i - 2 == P) {
			countBack++;
			break;
		}
		countBack++;
	}
	if (countFront < countBack) {
		Min = countFront;
	}
	else {
		Min = countBack;
	}
}

void solveCase() {
	int front = 1;
	int back = N;
	if (back % 2 == 0) {
		Even(front, back);
	}
	else {
		Odd(front, back);
	}
}

void printCase() {
	printf("%d\n", Min);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}