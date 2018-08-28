/*
Sample Input

2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1

Sample Output

7
3
*/

#include<stdio.h>

#define Max_N 100001

int N;
int Q;
long int x;
long int y;
int type;
int lastAns;
int **Seq;

void solveCase() {
	int indx;
	if (type == 1) {
		indx = (x ^ lastAns) % N;
		Append();
	}
}

void readCase() {
	int i, j;
	lastAns = 0;
	scanf("%d %d", &N, &Q);
	for (i = 0; i < Q; i++) {
		scanf("%d %d %d", &type, &x, &y);
		solveCase();
	}	
}

void printCase() {
	printf("-----------------------\n");
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d", Seq[i][j]);
		}
		printf("\n");
	}
}

int main() {

	int i;

	Seq = malloc(sizeof(int*) * Max_N);

	for (i = 0; i < Max_N; i++) {
		Seq[i] = malloc(sizeof(int*)*Max_N);
	}

	readCase();

	solveCase();

	//printCase();

	return 0;
}