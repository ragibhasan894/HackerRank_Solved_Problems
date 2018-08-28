#include<stdio.h>

#define Max_N 101

int N;
int K;
int T[Max_N];
int Page;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &T[i]);
	}
}

void solveCase() {
	int i, j;
	int imp = 0;
	int total_problem;
	int initPage;
	int initProb;
	Page = 0;
	for (i = 0; i < N; i++) {
		total_problem = T[i];
		if (total_problem <= K) {
			Page++;
		}
		else {
			initPage = Page + 1;
			initProb = 1;
			Page += (total_problem / K) + (total_problem%K);
			j = initPage;
			
		}
	}
	//printf("%d\n", imp);
}

void printCase() {
	printf("%d\n", Page);
}


int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}