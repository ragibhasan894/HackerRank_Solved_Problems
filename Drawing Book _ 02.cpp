#include<stdio.h>

int N;
int P;
int C1;
int C2;



void readCase() {
	scanf("%d%d", &N, &P);
}


void solveCase() {
	C1 = 0;
	C2 = 0;
	int i, j;
	if (P == 1 || N - P < 1) {
		printf("0\n");
		return;
	}
	for (i = 1; i <= N; i += 2) {
		C1++;
		if (i + 1 == P || i + 2 == P) {
			// printf("C1=%d\n",C1);
			break;
		}
	}

	if (N % 2 == 0) {
		for (j = N; j >= 1; j -= 2) {
			C2++;
			if (j - 1 == P || j - 2 == P) {
				// printf("C2=%d\n",C2);
				break;
			}
		}
	}
	else {
		for (j = N-1; j >= 1; j-=2) {
			if (j == P || j + 1 == P) {
				// printf("C2=%d\n",C2);
				break;
			}
			else
				C2++;
		}
	}

	if (C1<C2) {
		printf("%d\n", C1);
	}
	else {
		printf("%d\n", C2);
	}
}




int main() {

	readCase();

	solveCase();

	return 0;
}
