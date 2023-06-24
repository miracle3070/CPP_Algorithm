#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <cmath>

int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	int cnt = 0; // 자릿수
	int target = n;
	int result;
	while (target > 0) {
		cnt++;
		target /= 10;
	}

	result = (n - (int)(pow(10, cnt - 1)) + 1) * cnt;
	cnt--;

	while (cnt > 0) {
		result += (int)(pow(10, cnt - 1)) * 9 * cnt;
		cnt--;
	}

	printf("%d\n", result);
	return 0;
}