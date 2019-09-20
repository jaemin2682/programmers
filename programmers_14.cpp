#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	bool answer = true;
	int size = s.size();
	if (size != 4 && size != 6) {
		answer = false;
	}
	else {
		for (int i = 0; i < size; i++) {
			if (s[i] > '9' || s[i] < '0') {
				answer = false;
				break;
			}
		}
	}
	return answer;
}