#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	int size = arr.size();
	int min = 99999;
	int temp = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			temp = i;
		}
	}
	arr.erase(arr.begin() + temp);
	if (size < 2) answer.push_back(-1);
	else answer = arr;
	return answer;
}