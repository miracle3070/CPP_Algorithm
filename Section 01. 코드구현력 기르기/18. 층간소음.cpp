#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int main() {
//	freopen("input.txt", "rt", stdin);
	int n, m;
	int max = -1;
	int second = 0;
	scanf("%d %d", &n, &m);

	int sound;
	for (int i = 0; i < n; i++) {
		scanf("%d", &sound);
		if (sound <= m) {
			second = 0;
		}
		else {
			second++;
			if (max < second)
				max = second;
		}
	}

	printf("%d\n", max);
	return 0;
}