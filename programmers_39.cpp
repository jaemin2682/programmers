#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
	stack<int> s;
	int answer = 0;

	int size = arrangement.size();
	int cnt = 0;
	for (int i = 0; i < size; i++) {

		if (arrangement[i] == '(' && arrangement[i + 1] == ')' && i < size - 1) {
			continue;
		}
		else if (arrangement[i - 1] == '(' && arrangement[i] == ')' && i > 0) {
			answer += s.size();
		}
		else {
			if (arrangement[i] == '(') s.push(arrangement[i]);
			else if (arrangement[i] == ')') {
				s.pop();
				cnt++;
			}
		}
	}
	return answer + cnt;
}