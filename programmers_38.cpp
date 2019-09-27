#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
	int answer = 0;

	sort(citations.begin(), citations.end());
	int size = citations.size();
	for (int i = 0; i <= size; i++) {
		int cnt = 0;
		for (int j = 0; j < size; j++) {
			if (citations[j] >= i) cnt++;
		}
		if (answer < min(cnt, i)) answer = min(cnt, i);
	}

	return answer;
}