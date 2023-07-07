#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int main(void) {
//	freopen("input.txt", "rt", stdin);
	int n;
	int max = 0;
	scanf("%d", &n);

	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int len = 0;
	int target = 0;
	for (int i = 0; i < n; i++) {
		if (target <= num[i]) {
			target = num[i];
			if (max < ++len)
				max = len;
		}
		else {
			target = num[i];
			len = 1;
		}
	}

	printf("%d\n", max);
	return 0;
}