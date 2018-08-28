#include<stdio.h>
#include<string.h>

#define Max_N 100001

int N;
char Str[Max_N];
char Str2[Max_N];

void readCase() {
	scanf(" %s", Str);
}

void solveCase() {
	int i, j;
	int indx = -1;
	for (i = 0; i < strlen(Str); i++) {
		for (j = 0; j < strlen(Str); j++) {
			if (i != j && Str[i] == Str[j]) {
				Str[j] = ' ';
			}
		}
	}
	for (i = 0; i < strlen(Str); i++) {
		if (Str[i] != ' ') {
			indx++;
			Str2[indx] = Str[i];
		}
	}
}

void printCase() {
	printf("%s\n", Str2);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}