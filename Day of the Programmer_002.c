#include<stdio.h>

int Y;

void readCase() {
	scanf("%d", &Y);
}

void solveCase() {
	int i;
	if (Y == 1918) {
		printf("26.09.%d\n", Y);
	}
	else {
		if (Y < 1918) {
			if (Y % 4 == 0) {
				printf("12.09.%d\n", Y);
			}
			else {
				printf("13.09.%d\n", Y);
			}
		}
		else {
			if (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0)) {
				printf("12.09.%d\n", Y);
			}
			else {
				printf("13.09.%d\n", Y);
			}
		}
	}
}

int main() {

	readCase();

	solveCase();

	return 0;
}