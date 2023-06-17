#include <iostream>
using namespace std;

int main()
{
	int n, sum = 1;
	int min = (int)(1e9);
	bool flag = true;
	cin >> n;
	cout << "1 + ";

	for (int i = 2; i < min; i++) {
		if (n % i == 0) {
			if (flag) {
				min = n / i;
				flag = false;
			}
			cout << i << " + ";
			sum += i;
		}
	}
	sum += min;
	cout << min << " = " << sum << endl;

	return 0;
}
