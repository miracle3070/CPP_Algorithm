#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int result = 0;
int max_sum = 0;
int digit_sum(int x);

int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	int num, sum;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum = digit_sum(num);

		if (max_sum < sum) {
			max_sum = sum;
			result = num;
		}

		if (max_sum == sum)
			result = (num > result) ? num : result;
	}

	printf("%d\n", result);
	return 0;
}

int digit_sum(int x) {
	int sum = 0;
	while (x > 0) {
		sum += (x % 10);
		x /= 10;
	}

	return sum;
}