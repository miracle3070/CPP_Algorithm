// 풀이시간: 00:09:25

#pragma warning(disable:4996)
#include <stdio.h>
using namespace std;

int main() {
	// freopen("input.txt", "rt", stdin);
	char str[50] = {0,};
	scanf("%s", str);

	int n = 1;
	int number = 0; // 만들어진 자연수
	int cnt = 0; // 약수의 개수
	for (int i = 49; i >= 0; i--) {
		if ('0' <= str[i] && str[i] <= '9') {
			number += (str[i] - '0') * n;
			n *= 10;
		}
	}

	for (int i = 1; i <= number; i++) {
		if (number % i == 0)
			cnt++;
	}

	printf("%d\n", number);
	printf("%d\n", cnt);
	return 0;
}