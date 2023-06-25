#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int main() {
//	freopen("input.txt", "rt", stdin);
	char str1[101];
	char str2[101];
	scanf("%s", str1);
	scanf("%s", str2);

	if (strlen(str1) != strlen(str2)) {
		printf("NO");
		return 0;
	}

	int cntArr1[52] = { 0, };
	int cntArr2[52] = { 0, };
	for (int i = 0; str1[i] != '\0'; i++) {
		if ('A' <= str1[i] && str1[i] <= 'Z') {
			cntArr1[str1[i] - 'A']++;
		}
		else {
			cntArr1[str1[i] - 'a' + 26]++;
		}

		if ('A' <= str2[i] && str2[i] <= 'Z') {
			cntArr2[str2[i] - 'A']++;
		}
		else {
			cntArr2[str2[i] - 'a' + 26]++;
		}
	}

	bool result = true;
	for (int i = 0; i < 52; i++) {
		if (cntArr1[i] != cntArr2[i]) {
			result = false;
			break;
		}
	}

	if (result)
		printf("YES");
	else
		printf("NO");

	return 0;
}