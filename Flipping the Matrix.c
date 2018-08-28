#include<stdio.h>

#define Size 257

int Q;
int N;
int Matrix[Size][Size];


void readCase() {
	int i, j;
	scanf("%d", &N);
	N *= 2;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &Matrix[i][j]);
		}
	}
}

void ReverseCol(col) {
	int i, j;
	int Copy[Size];
	j = 0;
	for (i = N - 1; i >= 0; i--) {
		Copy[j] = Matrix[i][col];
		j++;
	}
	for (i = 0; i < j; i++) {
		Matrix[i][col] = Copy[i];
	}
}

void ReverseRow(row) {
	int i, j;
	int Copy[Size];
	j = 0;
	for (i = N - 1; i >= 0; i--) {
		Copy[j] = Matrix[row][i];
		j++;
	}
	for (i = 0; i < j; i++) {
		Matrix[row][i] = Copy[i];
	}
}

void solveCase() {
	int i, j;
	int upsum, lowsum, leftsum, rightsum;

	if (N > 2) {
		int col = 0;
		int row = 0;
		while (col < N) {
			upsum = Matrix[0][col]+Matrix[1][col];
			lowsum = Matrix[N - 1][col] + Matrix[N - 2][col];
			if (upsum < lowsum) {
				ReverseCol(col);
			}
			col++;
		}
		/**while (row < N) {
			leftsum = Matrix[row][0] + Matrix[row][1];
			rightsum = Matrix[row][N-1] + Matrix[row][N-2];
			if (leftsum<rightsum) {
				ReverseRow(row);
			}
			row++;
		}
		*/
	}
}

void printCase() {
	int i, j;
	printf("\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d ", Matrix[i][j]);
		}
		printf("\n");
	}
}

int main() {

	int i;
	
	scanf("%d", &Q);

	for (i = 0; i < Q; i++) {

		readCase();

		solveCase();

		printCase();

	}

	return 0;
}