#include<stdio.h>

long long int N;
char S[101];
int Len;
int C1, C2;

void readCase() {
	scanf(" %s", S);
	scanf("%lld", &N);
	int i = 0;
	while (S[i] != '\0') {
		i++;
	}
	Len = i;
}

void solveCase() {
	long long int a, b, c, i;
	C1 = C2 = 0;
	a = N / Len;
	b = N % Len;
	for (i = 0; i < Len; i++) {
		if (S[i] == 'a') {
			C1++;
		}
	}
	c = C1*a;
	for (i = 0; i < b; i++) {
		if (S[i] == 'a') {
			C2++;
		}
	}
	c = c + C2;
}

void printCase() {
	printf("%d\n", c);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}