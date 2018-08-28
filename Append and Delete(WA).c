#include<stdio.h>

char S[101];
char T[101];
int K;
int OP;
int Mis;

void readCase() {
	scanf(" %s", S);
	scanf(" %s", T);
	scanf("%d", &K);
}

void solveCase() {
	int i;
	int lenS = 0;
	int lenT = 0;
	Mis = 101;
	for (i = 0; i<100; i++) {
		if (S[i] != T[i]) {
			Mis = i;
			break;
		}
	}
	for (i = 0; S[i] != '\0'; i++) {
		lenS++;
	}
	for (i = 0; T[i] != '\0'; i++) {
		lenT++;
	}
	OP = (lenS - Mis) + (lenT - Mis);
}

void printCase() {
	if (OP <= K && Mis != 101) {
		printf("Yes\n");
	}
	else  if (Mis == 101) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}