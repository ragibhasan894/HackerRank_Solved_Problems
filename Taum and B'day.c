#include<stdio.h>

int T;
long int X, Y, Z, B, W;
long int Max, Min;

void solve() {
	if (X > Y) {
		if (Y + Z < X) {
			X = Y + Z;
		}
	}
	if (X < Y) {
		if (X + Z < Y) {
			Y = X + Z;
		}
	}
	printf("%ld\n", (B*X) + (W*Y));
}

void readCase() {
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%ld %ld", &B, &W);
		scanf("%ld %ld %ld", &X, &Y, &Z);
		solve();
	}
}

int main() {

	readCase();

	return 0;
}