#include<stdio.h>

#define Max_N 51

int N;
int A[Max_N];

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d", &A[i]);
	}
}

void solveCase() {
	int i, j, k;
	int x, y;
	int ck;
	for (i = 1; i <= N; i++) {
		x = i;
		ck = 0;
		for (j = 1; j <= N; j++) {
			if (A[j] == x) {
				y = j;
				for (k = 1; k <= N; k++) {
					if (A[k] == y) {
						printf("%d\n", k);
						ck = 1;
						break;
					}
				}
			}
			if (ck == 1) {
				break;
			}
		}
	}
}

void printCase() {

}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}