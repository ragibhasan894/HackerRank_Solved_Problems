#include<stdio.h>

int X1;
int V1;
int X2;
int V2;

void readCase() {
	scanf("%d %d %d %d", &X1, &V1, &X2, &V2);
}

void solveCase() {
	int i;
	
	if (V1 <= V2) {
		printf("NO\n");
	}
	else if ((X2 - X1) % (V1 - V2) == 0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

}

int main() {

	readCase();

	solveCase();

	return 0;
}