#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int st[101];
int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	int result = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int student;
		scanf("%d", &student);
		st[i] = student;
	}

	int max = st[n];
	for (int i = n - 1; i > 0; i--) {
		if (max < st[i]) {
			max = st[i];
			result++;
		}
	}

	printf("%d\n", result);
	return 0;
}