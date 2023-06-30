#pragma warning(disable:4996)
#define MAX_LEN 10
#include <cstdio>
#include <cstring>

int main() {
//	freopen("input.txt", "rt", stdin);
	int A[MAX_LEN];
	int B[MAX_LEN];

	for (int i = 0; i < MAX_LEN; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < MAX_LEN; i++) {
		scanf("%d", &B[i]);
	}

	int pointA = 0;
	int pointB = 0;
	bool isDraw = true;
	char lastWinner;

	for (int i = 0; i < MAX_LEN; i++) {
		if (A[i] == B[i]) {
			pointA++;
			pointB++;
		}
		else if (A[i] > B[i]) {
			pointA += 3;
			lastWinner = 'A';
			isDraw = false;
		}
		else {
			pointB += 3;
			lastWinner = 'B';
			isDraw = false;
		}
	}

	printf("%d %d\n", pointA, pointB);
	if (isDraw)
		printf("D\n");
	else if (pointA > pointB)
		printf("A\n");
	else if (pointA < pointB)
		printf("B\n");
	else
		printf("%c\n", lastWinner);

	return 0;
}