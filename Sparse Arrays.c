#include<stdio.h>
#include<string.h>

#define Max_N 1001

int N;
int Q;
char Str[Max_N][22];
char Query[Max_N][22];
int Count;

void readCase() {
	int i,j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf(" %s", Str[i]);
	}
	scanf("%d", &Q);
	for (i = 0; i < Q; i++) {
		scanf(" %s", Query[i]);
	}
}

void solveCase() {
	char temp[Max_N];
	int i,j;
	for (i = 0; i < Q; i++) {
		Count = 0;
		for (j = 0; j < N; j++) {
			if (strcmp(Query[i], Str[j]) == 0) {
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