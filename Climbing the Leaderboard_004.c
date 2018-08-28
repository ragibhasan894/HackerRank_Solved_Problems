#include<stdio.h>

#define Max 200001

int N;
int M;
int A[Max];
int B[Max];
int C[Max];
int Current = 0;
int Top = 0;

void Push(int n) {
	C[Current] = n;
	Current++;
}

int Check(int k) {
	int i;
	int rank;
	if (k < C[Current-1]) {
		rank = Current + 1;
		//return rank;
	}
	if (k == C[Current - 1]) {
		rank = Current;
		//return rank;
	}
	if (k >= C[0]) {
		rank = 1;
		//return rank;
	}
	for (i = Current - 2; i >= 1; i--) {
		if (k == C[i]) {
			rank = i + 1;
			break;
		}
		if (k <= C[i] && k>C[i + 1]) {
			rank = i + 2;
			break;
		}
		if (k < C[i] && k >= C[i + 1]) {
			rank = i + 2;
			break;
		}
	}
	/*for (i = 1; i < Current - 1; i++) {
		if (k < C[i] && k >= C[i+1]) {
			rank = i + 1;
			return rank;
			break;
		}
		if (k <= C[i] && k > C[i+1]) {
			rank = i;
			return rank;
			break;
		}
	}*/
	return rank;
}

void readCase() {
	int i;
	int res;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (A[i] != Top) {
			Top = A[i];
			Push(A[i]);
		}
	}
	//printf("%d ", Current);
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%d", &B[i]);
		res = Check(B[i]);
		printf("%d\n", res);
		
	}
}


int main() {

	readCase();


	return 0;
}