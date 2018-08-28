#include<stdio.h>

#define Max_Size 100001

int S;
int T;
int A;
int B;
int M;
int N;
int Apple[Max_Size];
int Orrange[Max_Size];
int totalApple;
int totoalOrrange;


void readCase() {
	int i;
	scanf("%d %d", &S, &T);
	scanf("%d %d", &A, &B);
	scanf("%d %d", &M, &N);
	for (i = 0; i < M; i++) {
		scanf("%d", &Apple[i]);
	}
	for (i = 0; i < N; i++) {
		scanf("%d", &Orrange[i]);
	}
	totalApple = 0;
	totoalOrrange = 0;
}

void solveCase() {
	int i, t=A;
	for (i = 0; i < M; i++) {
		t += Apple[i];
		if (t >= S && t <= T) {
			totalApple++;
		}
		t = A;
	}
	t = B;
	for (i = 0; i < N; i++) {
		t += Orrange[i];
		if (t >= S && t <= T) {
			totoalOrrange++;
		}
		t = B;
	}
}

void printCase() {
	printf("%d\n%d\n", totalApple, totoalOrrange);
}


int main() {
	
	freopen("input.txt", "r", stdin);

	readCase();

	solveCase();

	printCase();

	return 0;
}