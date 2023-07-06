#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

int day[100000];
int max = -(int)(1e9);
int main() {
//	freopen("input.txt", "rt", stdin);
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &day[i]);
	}

	int temp = 0;
	int i = 0;
	for (; i < k; i++) {
		temp += day[i];
	}
	max = temp;
	
	for (; i < n; i++) {
		temp -= day[i - k];
		temp += day[i];
		if (max < temp)
			max = temp;
	}

	printf("%d\n", max);
	return 0;
}