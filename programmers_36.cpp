#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;

	int idx;
	for (int i = heights.size() - 1; i >= 0; i--) {
		idx = -1;
		for (int j = i - 1; j >= 0; j--) {
			if (heights[j] > heights[i]) {
				idx = j + 1;
				break;
			}
		}
		if (idx == -1) answer.insert(answer.begin(), 0);
		else answer.insert(answer.begin(), idx);
	}

	return answer;
}