#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;

	for (int i = 0; i < prices.size(); i++) {
		bool check = false;
		for (int j = i; j < prices.size(); j++) {
			if (prices[i] > prices[j]) {
				answer.push_back(j - i);
				check = true;
				break;
			}
		}

		if (!check) answer.push_back(prices.size() - i - 1);
	}

	return answer;
}