// WA (unsloved)

#include<stdio.h>

#define Max_N 1001

int N;
int Q;
int SeqList[Max_N][Max_N];
int Col = 0;
int lastAnswer = 0;
int QueryType;
int X;
int Y;

void readCase() {	
	scanf("%d%d", &N, &Q);	
}

void solveCase() {
	int i, seq;
	int j;
	int length = 0;
	int index;
	for (i = 0; i < Q; i++) {
		scanf("%d%d%d", &QueryType, &X, &Y);

		if (QueryType == 1) {
			seq = (X^lastAnswer) % N;
			SeqList[seq][Col] = Y;
			Col++;
		}
		else {
			seq = (X^lastAnswer) % N;
			lastAnswer = SeqList[seq][Col];
			Col++;

			printf("%d\n", lastAnswer);
		}
	}
}

int main() {

	freopen("input.txt", "r", stdin);

	readCase();

	solveCase();

	return 0;
}