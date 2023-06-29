#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int end, answer;
		scanf("%d %d", &end, &answer);
		
		int target = end * (end + 1) / 2;
		if (answer == target)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}