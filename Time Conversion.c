#include<stdio.h>

char Time12[12];
char Time24[12];
char Hour[2];
char T;
int H;

void readCase() {
	int i;
	scanf(" %s", Time12);
	for (i = 0; i < 8; i++) {
		Time24[i] = Time12[i];
	}
}

void solveCase() {
	T = Time12[8];
	char *ptr;
	H = strtol(Time12, &ptr, 10);
	if (H < 12 && T == 'P') {
		H = H + 12;
		Time24[0] = H / 10 + '0';
		Time24[1] = H % 10 + '0';
	}
	if (H == 12 && T == 'A') {
		Time24[0] = '0';
		Time24[1] = '0';
	}

}

void printCase() {
	printf("%s\n",Time24);
}

int main() {

	readCase();

	solveCase();

	printCase();

	return 0;
}