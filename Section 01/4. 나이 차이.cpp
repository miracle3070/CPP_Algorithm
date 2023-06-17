#include <iostream>
using namespace std;

int main() {
	int n, num;
	int max = 0, min = (int)(1e9);
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		max = (num > max) ? num : max;
		min = (num < min) ? num : min;
	}

	cout << max - min;
	return 0;
}