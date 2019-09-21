#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	int num = 1;
	queue<double> que;
	int size = speeds.size();
	for (int i = 0; i < size; i++) {
		que.push(ceil((100 - (double)progresses[i]) / (double)speeds[i]));
	}
	int temp = que.front();
	que.pop();
	while (!que.empty()) {
		if (que.front() <= temp) {
			num++;
		}
		else {
			answer.push_back(num);
			num = 1;
			temp = que.front();
		}
		que.pop();
	}
	answer.push_back(num);

	return answer;
}