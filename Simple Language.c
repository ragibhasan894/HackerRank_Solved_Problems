#include<stdio.h>


int N;
int Str[5];
int K;
int Val;
int Max;

void readCase() {
	int i;
	Val = 0;
	Max = -1000000000;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s %d", Str, &K);
		if (Str[0] == 's') {
			Val = K;
		}
		if (Str[0] == 'a') {
			Val += K;
		}
		printf("%d\n", Val);
	}
}

void solveCase() {

}

void printCase() {
	printf("%d\n", Val);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}