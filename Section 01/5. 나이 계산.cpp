#pragma warning(disable:4996)
#include <stdio.h>
using namespace std;

int main() {
//	freopen("input.txt", "rt", stdin);
	char id[20];
	int year;
	scanf("%s", id);

	if (id[7] == '1' || id[7] == '2')
		year = 1900 + (id[0] - '0') * 10 + (id[1] - '0');
	else
		year = 2000 + (id[0] - '0') * 10 + (id[1] - '0');
	printf("%d ", (2019 - year + 1));

	if (id[7] == '1' || id[7] == '3')
		printf("M\n");
	else
		printf("W\n");

	return 0;
}