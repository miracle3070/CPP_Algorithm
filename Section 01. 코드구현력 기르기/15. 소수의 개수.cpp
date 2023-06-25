#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <cmath>

bool check[200001];
int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	check[0] = true;
	check[1] = true;
	int result = 0;

	// 에라토스테네스의 체 알고리즘 활용
	for (int i = 2; i <= n; i++) {
		if (check[i])
			continue;
		result++;
		for (int k = 2; i * k <= n; k++) {
			check[i * k] = true;
		}
	}

	printf("%d\n", result);
	return 0;
}