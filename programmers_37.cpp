#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < scoville.size(); i++) {
		pq.push(scoville[i]);
	}

	if (pq.size() == 1) {
		if (pq.top() > K) answer = 0;
		else answer = -1;
	}
	while (pq.size() >= 2) {
		if (pq.top() < K) {
			answer++;
			int temp = pq.top();
			pq.pop();
			temp += pq.top() * 2;
			pq.pop();
			pq.push(temp);
		}
		else break;
	}

	if (pq.top() < K) answer = -1;

	return answer;
}