#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <cmath>

#define MAX_N 50000
int calcCnt(int n, int sqrt_value);

int main() {
//	freopen("input.txt", "rt", stdin);
	const int SQRT_VALUE = (int)(sqrt(MAX_N)) + 1;
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", calcCnt(i, SQRT_VALUE));
	}
	printf("\n");

	return 0;
}

int calcCnt(int n, int sqrt_value) {
	int result = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			result++;
	}

	return result;
}