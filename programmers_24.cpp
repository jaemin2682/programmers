#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	string temp;
	temp = to_string(n);
	int size = temp.size();
	int temper = 0;
	for (int i = 0; i < size / 2; i++) {
		temper = temp[i];
		temp[i] = temp[size - 1 - i];
		temp[size - 1 - i] = temper;
	}

	for (int i = 0; i < size; i++) {
		answer.push_back(temp[i] - 48);
	}

	return answer;
}