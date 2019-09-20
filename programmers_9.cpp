#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	vector<int> temp;
	int num = arr.size();
	for (int i = 0; i < num; i++) {
		if (arr[i] % divisor == 0) temp.push_back(arr[i]);
	}
	sort(temp.begin(), temp.end());
	if (temp.empty()) temp.push_back(-1);
	answer = temp;

	return answer;
}