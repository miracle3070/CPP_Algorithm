#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int cnt[10];
int main() {
//	freopen("input.txt", "rt", stdin);
	char numStr[101];
	scanf("%s", numStr);

	for (int i = 0; numStr[i] != '\0'; i++) {
		cnt[numStr[i] - '0']++;
	}

	int result;
	int maxCnt = 0;
	for (int i = 0; i < 10; i++) {
		if (maxCnt <= cnt[i]) {
			maxCnt = cnt[i];
			result = i;
		}
	}
	
	printf("%d\n", result);
	return 0;
}