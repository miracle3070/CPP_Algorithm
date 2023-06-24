#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int result = 0;
int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int target = i;
		while (target > 0) {
			result++;
			target /= 10;
		}
	}

	printf("%d\n", result);
	return 0;
}