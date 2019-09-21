#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	string temp = "";
	int size = s.size();
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (s[i] == ' ') {
			num = 0;
			answer.append(temp);
			temp.clear();
			answer.push_back(' ');
		}
		else {
			num++;
			if (num % 2 == 1) {
				if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
			}
			else if (num % 2 == 0) {
				if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
			}
			temp.push_back(s[i]);
		}
		if (i == size - 1) answer.append(temp);
	}

	return answer;
}