#include<stdio.h>

#define Max_N 100001

int N;
int K;
int C[Max_N];
int Charged;
int Ans;

void readCase() {
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &C[i]);
	}
	scanf("%d", &Charged);
}

void solveCase() {
	Ans = 0;
	int i, j;
	int total;
	int sum=0;
	for (i = 0; i < N; i++) {
		sum += C[i];
	}
	total = sum - C[K];
	if (total / 2 >= Charged) {
		printf("Bon Appetit\n");
	}
	else {
		printf("%d\n", Charged - (total / 2));
	}

}

int main() {

	readCase();

	solveCase();

	return 0;
}