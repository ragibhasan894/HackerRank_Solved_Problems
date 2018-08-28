#include<stdio.h>

#define Max_N 1001

int S;
int N, M;
int Keyboard[Max_N];
int Usb[Max_N];
int AllPrice[Max_N*Max_N];
int Max;
int indx = 0;

void Push(int s) {
	AllPrice[indx] = s;
	indx++;
}

void readCase() {
	int i,j;
	scanf("%d %d %d", &S, &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%d", &Keyboard[i]);
	}
	for (i = 0; i < M; i++) {
		scanf("%d", &Usb[i]);
	}
}

void solveCase() {
	int i, j;
	int t;
	Max = 1;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			t = Keyboard[i] + Usb[j];
			if (t <= S && t > Max) {
				Max = t;
			}
		}
	}
}

void printCase() {
	if (Max > 1) {
		printf("%d\n", Max);
	}
	else {
		printf("-1\n");
	}
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}