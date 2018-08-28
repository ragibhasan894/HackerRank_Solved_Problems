#include<stdio.h>
#include<string.h>

#define Max_N 1001

int N;
int Q;
char Str[Max_N][22];
char Query[Max_N][22];
int Count;

void readCase() {
	int i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf(" %s", Str[i]);
	}
	scanf("%d", &Q);
	for (i = 0; i < Q; i++) {
		scanf(" %s", Query[i]);
	}
}

int ChkStr(char qry[], char st[]) {
	int i, j;
	int c = 0;
	j = 0;
	for (i = 0; st[i] != '\0'; i++) {
		if (st[i] != qry[j]) {
			c = 1;
			break;
		}
		j++;
	}
	return c;
}

void solveCase() {
	char temp[Max_N];
	int i, j;
	int c;
	for (i = 0; i < Q; i++) {
		Count = 0;
		for (j = 0; j < N; j++) {
			c = ChkStr(Query[i], Str[j]);
			if (c == 0) {
				Count++;
			}
		}
		printf("%d\n", Count);
		Count = 0;
	}
}

int main() {

	readCase();

	solveCase();


	return 0;
}