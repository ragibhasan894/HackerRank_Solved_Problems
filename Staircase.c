#include<stdio.h>

int N;

void readCase() {
	scanf("%d", &N);
}

void solveCase() {
	char space = ' ';
	char hash = '#';
	int hs = 0;
	int sp;
	int i,j,k;
	int total = N;
	for (i = N; i >= 1; i--) {
		sp = i - 1;
		hs++;
		for (j = 1; j <= sp; j++) {
			printf("%c", space);
		}
		for (k = 0; k < hs; k++) {
			printf("%c", hash);
		}
		printf("\n");
	}
}

int main() {

	readCase();

	solveCase();

	return 0;
}