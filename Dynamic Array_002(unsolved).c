#include<stdio.h>

#define Max_N 100001

int N, Q;
int Query;
long int X, Y;
long int lastAnswer;
//long int seqList[Max_N][Max_N];
int **seqList;
//int Sql[Max_N][Max_N];
int **Sql;

void initSql() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			Sql[i][j] = -1;
		}
	}
}

int findIndexType1(int seq) {
	int i;
	int val = 0;
	for (i = 0; i < N; i++) {
		if (Sql[seq][i] == -1) {
			val = i;
			break;
		}
	}
	return val;
}

int findIndexType2(int seq) {
	int i;
	int val = 0;
	for (i = 0; i < N; i++) {
		if (Sql[seq][i] == 0) {
			val++;
		}
		else {
			break;
		}
	}
	return val;
}

void solve(int query, int x, int y) {
	int i, j, k;
	int seq;
	int indx;
	if (query == 1) {
		seq = (x^lastAnswer) % N;
		indx = findIndexType1(seq);
		seqList[seq][indx] = y;
		Sql[seq][indx] = 0;
	}
	if (query == 2) {
		seq = (x^lastAnswer) % N;
		indx = findIndexType2(seq);
		indx = y % indx;
		lastAnswer = seqList[seq][indx];
		printf("%ld\n", lastAnswer);
	}
}

void readCase() {
	int i,j;
	lastAnswer = 0;
	scanf("%d %d", &N, &Q);
	initSql();
	for (i = 0; i < Q; i++) {
		scanf("%d %ld %ld", &Query, &X, &Y);
		solve(Query, X, Y);
	}
}

int main() {

	int i;

	seqList = malloc(sizeof(int*) * Max_N);
	Sql = malloc(sizeof(int*) * Max_N);

	for (i = 0; i < Max_N; i++) {
		seqList[i] = malloc(sizeof(int*)*Max_N);
		Sql[i] = malloc(sizeof(int*)*Max_N);
	}

	readCase();

	return 0;
}