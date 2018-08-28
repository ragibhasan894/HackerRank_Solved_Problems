#include<stdio.h>

int T;
int N;
int M;
int ID;
int GetID;

void readCase() {
	scanf("%d %d %d", &N, &M, &ID);
}

void solve(int id, int m) {
	if (m == 1) {
		GetID = id;
		return;
	}
	if (id == N) {
		solve(1, m-1);
	}
	solve(id + 1, m-1);
}

void solveCase() {

	solve(ID, M);
}

void printCase() {
	printf("%d\n", GetID);
}

int main() {

	int Case;

	scanf("%d", &T);

	for (Case = 1; Case <= T; Case++) {
		readCase();
		solveCase();
		printCase();
	}

	return 0;
}