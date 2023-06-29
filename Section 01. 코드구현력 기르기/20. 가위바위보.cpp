#pragma warning(disable:4996)
#define SCISSORS 1
#define ROCK 2
#define PAPER 3
#include <cstdio>
#include <cstring>

int A[101];
int B[101];
int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	int target;
	for (int i = 0; i < n; i++) {
		scanf("%d", &target);
		A[i] = target;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &target);
		B[i] = target;
	}

	for (int i = 0; i < n; i++) {
		bool result;
		if (A[i] == B[i]) {
			printf("D\n");
			continue;
		}
		else if (A[i] == SCISSORS) {
			if (B[i] == ROCK)
				result = false;
			else
				result = true;
		}
		else if (A[i] == ROCK) {
			if (B[i] == PAPER)
				result = false;
			else
				result = true;
		}
		else {
			if (B[i] == SCISSORS)
				result = false;
			else
				result = true;
		}

		if (result)
			printf("A\n");
		else
			printf("B\n");
	}
	return 0;
}