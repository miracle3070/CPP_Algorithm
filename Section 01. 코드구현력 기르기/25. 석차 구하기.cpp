#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
//	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	vector<int> score(n);
	vector<int> memory(n);
	unordered_map<int, int> scoreMap;

	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		score[i] = input;
		memory[i] = input;
	}

	sort(score.rbegin(), score.rend());
	int pre_score = 0;
	for (int i = 0; i < n; i++) {
		if (pre_score == score[i])
			continue;
		
		scoreMap.insert(make_pair(score[i], i + 1));
		pre_score = score[i];
	}

	for (int score : memory) {
		printf("%d ", scoreMap.at(score));
	}

	printf("\n");
	return 0;
}