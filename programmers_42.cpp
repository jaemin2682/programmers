#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int red) {
	vector<int> answer;

	int sum = brown + red;

	for (int height = 1; height <= sum / 2; height++) {
		if ((sum % height == 0) && (sum / height * 2 + height * 2 - 4 == brown) &&
			(sum / height >= height)) {
			answer.push_back(sum / height);
			answer.push_back(height);
		}
	}

	return answer;
}