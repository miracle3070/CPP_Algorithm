// 풀이시간: 

#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int main() {
//	freopen("input.txt", "rt", stdin);
	const int DIFF = 'a' - 'A';
	char str[102] = {0,};
	char result[102];
	fgets(str, sizeof(str) / sizeof(char), stdin);

	int idx = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ')
			continue;
		else if ('A' <= str[i] && str[i] <= 'Z')
			result[idx++] = str[i] + DIFF;
		else if ('a' <= str[i] && str[i] <= 'z')
			result[idx++] = str[i];
		else {}
	}
	result[idx] = '\0';

	printf("%s\n", result);
	return 0;
}