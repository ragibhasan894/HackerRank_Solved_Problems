/*
Sample Input

5 4
1 2 3 4 5
Sample Output

5 1 2 3 4
*/

#include<stdio.h>

#define Max_N 100001

int N;
int D;
int A[Max_N];



int main() {

	int i;
	int tmp;

	scanf("%d %d", &N, &D);

	for (i = 0; i < N; i++) {
		tmp = i - D;

		if (tmp < 0) {
			scanf("%d", &A[tmp + N]);
		}
		else {
			scanf("%d", &A[tmp]);
		}
	}

	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}

	return 0;
}