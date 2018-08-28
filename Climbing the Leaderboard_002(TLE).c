#include<stdio.h>

#define Max_N 200001

int N;
int M;
long int A[Max_N];
long int B[Max_N];
long int Lvl[Max_N];
int SizeOfLvl;

void readCase() {
	int i;
	int j = 0;
	int temp;
	SizeOfLvl = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%ld", &A[i]);
		temp = A[i];
		if (i > 0 && temp != Lvl[j]) {
			j++;
			Lvl[j] = temp;
			SizeOfLvl++;
		}
		if (i == 0) {
			Lvl[j] = temp;
			SizeOfLvl++;
		}

	}
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%ld", &B[i]);
	}
}

void solveCase() {
	int lvl[Max_N];
	int i, j, k, l;
	
	for (i = 0; i < M; i++) {
		k = 0;
		for (j = 0; j < SizeOfLvl; j++) {
			if (B[i] >= Lvl[j]) {
				k = 1;
				break;
			}
			else {
				k = 0;
			}
		}
		if (k == 0) {
			printf("%d\n", SizeOfLvl + 1);
		}
		else {
			printf("%d\n", j + 1);
		}
	}
}

int main() {

	readCase();

	solveCase();

	return 0;
}