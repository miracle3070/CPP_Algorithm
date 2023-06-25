#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <cmath>

int reverse(int x);
bool isPrime(int x);

int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int target;
		scanf("%d", &target);

		int reversedNum = reverse(target);
		bool result = isPrime(reversedNum);
		if (result) {
			printf("%d ", reversedNum);
		}
	}

	printf("\n");
	return 0;
}

int reverse(int x) {
	int reversedNum = 0;
	while (x > 0) {
		reversedNum = (reversedNum * 10) + (x % 10);
		x /= 10;
	}
	return reversedNum;
}

bool isPrime(int x) {
	if (x == 1)
		return false;

	bool result = true;
	int sqrtNum = (int)sqrt(x) + 1;
	for (int i = 2; i <= sqrtNum; i++) {
		if (x == i)
			continue;
		if (x % i == 0) {
			result = false;
			break;
		}
	}
	return result;
}