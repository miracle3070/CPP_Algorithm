#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	vector<int> players(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &players[i]);
	}

	for (int i = 0; i < n; i++) {
		int rank = i;
		for (int k = i; k >= 0; k--) {
			if (players[i] > players[k])
				rank--;
		}
		printf("%d ", rank + 1);
	}
	printf("\n");

	return 0;
}