#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	int size = s.size();

	for (int i = 0; i < size; i++) {
		char ch = s[i];
		if (ch == ' ') {
			answer.push_back(' ');
		}
		else {
			unsigned char tmp = ch + n;

			if ('a' <= ch && ch <= 'z') {
				if (tmp > 'z')
					tmp = 'a' + (tmp - 'z') - 1;
			}
			else if ('A' <= ch && ch <= 'Z') {
				if (tmp > 'Z')
					tmp = 'A' + (tmp - 'Z') - 1;
			}
			answer.push_back(tmp);
		}
	}
	return answer;
}