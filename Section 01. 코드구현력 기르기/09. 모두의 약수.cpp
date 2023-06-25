#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <cmath>

int cnt[50001];
int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int k = 1; i * k <= n; k++) {
			cnt[i * k]++;
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}
	printf("\n");
	return 0;
}