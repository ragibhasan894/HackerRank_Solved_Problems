#include<stdio.h>

int A[27];
char Word[11];
char Alpha[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int T;
int Max;

void readCase() {
	int i;
	for (i = 0; i < 26; i++) {
		scanf("%d", &A[i]);
	}
	scanf(" %s", Word);
}

void solveCase() {
	int i, j;
	Max = 1;
	for (i = 0; Word[i] != '\0'; i++) {
		for (j = 0; j < 26; j++) {
			if (Word[i] == Alpha[j]) {
				T = A[j];
				if (T > Max) {
					Max = T;
				}
			}
		}
	}
	printf("%d\n", i*Max);
}

void printCase() {

}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}