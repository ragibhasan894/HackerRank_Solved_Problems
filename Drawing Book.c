#include<stdio.h>

int N;
int P;
int firstPage;
int lastPage;

void readCase() {
	scanf("%d%d", &N, &P);
	firstPage = 1;
	lastPage = N;
}


void solveCase() {
	int minTurn1 = 0;
	int minTurn2 = 0;
	int i;
	//Direct return 0 turn
	if (P == N || P == 1 || N - P <= 1) {
		printf("0\n");
		return;
	}
	else {
		//Case-01 : start from the first page
		for (i = firstPage; i <= N-2; i += 2) {
			minTurn1++;
			if (i == P || i - 1 == P) {
				break;
			}
		}
		//Case-02 : start from the last page
		for (i = lastPage; i >= firstPage-2; i -= 2) {
			minTurn2++;
			if (i == P || i - 1 == P) {
				break;
			}
		}
		//Print the minimum
		if (minTurn1 < minTurn2) {
			printf("%d\n", minTurn1);
		}
		else {
			printf("%d\n", minTurn2);
		}
	}
}

int main() {

	readCase();

	solveCase();

	return 0;
}