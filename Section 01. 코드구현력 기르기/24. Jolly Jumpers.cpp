#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	vector<int> num(n);
	vector<bool> check(n);
	bool result = true;
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		temp = num[i] - num[i + 1];
		if (temp < 0)
			temp = -temp;

		if (temp < 1 || n <= temp) {
			result = false;
			break;
		}

		if (check[temp] == true) {
			result = false;
			break;
		}

		check[temp] = true;
	}

	if (result)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}