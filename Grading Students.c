#include<stdio.h>

#define Max_N 61

int N;
int Grade[Max_N];

void readCase() {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &Grade[i]);
	}
}

void solveCase() {
	int i;
	int temp;
	for (i = 0; i < N; i++) {
		if (Grade[i]>37 && Grade[i] % 5 != 0) {
			if (Grade[i] % 10 < 5) {
				temp = Grade[i] / 10 * 10 + 5;
			}
			if (Grade[i] % 10 > 5) {
				temp = Grade[i] / 10 * 10 + 10;
			}
			if (temp - Grade[i] < 3) {
				printf("%d\n", temp);
			}
			if (temp - Grade[i] >= 3) {
				printf("%d\n", Grade[i]);
			}
		}
		else {
			printf("%d\n", Grade[i]);
		}
	}
}

int main() {

	readCase();

	solveCase();

	return 0;
}