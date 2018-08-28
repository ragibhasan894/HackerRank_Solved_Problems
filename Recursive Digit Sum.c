#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int solve(char s[]){
	int i;
	int rem = 0;
	for (i = 0; i < strlen(s); ++i){
		rem = (rem + (s[i] - '0')) % 9;
	}
	return rem % 9;
}

void solveCase() {
	int K;
	int Ans;
	char* N = (char *)malloc(512000 * sizeof(char));

	scanf("%s %d", N, &K);

	K = K % 9;

	if (K == 0){
		printf("9\n");
		return;
	}
	else{
		Ans = solve(N);
		Ans = (Ans * K) % 9;

		if (Ans != 0) {
			printf("%d\n", Ans);
		}
		else {
			printf("9\n");
		}
	}
}

int main(){

	solveCase();

	return 0;
}
