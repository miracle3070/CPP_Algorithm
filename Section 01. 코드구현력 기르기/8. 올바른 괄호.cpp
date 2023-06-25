// 풀이시간: 00:06:28

#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int main() {
//	freopen("input.txt", "rt", stdin);
	int open_cnt = 0;
	char str[50];
	bool result = true;
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(') {
			open_cnt++;
		}
		else {
			if (open_cnt <= 0) {
				result = false;
				break;
			}
			open_cnt--;
		}
	}

	if (result && open_cnt == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}