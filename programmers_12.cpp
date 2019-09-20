#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;

	vector<pair<char, string>> p;
	int num = strings.size();

	for (int i = 0; i < num; i++) {
		p.push_back(pair<char, string>(strings[i][n], strings[i]));
	}
	sort(p.begin(), p.end());

	for (int i = 0; i < num; i++) {
		answer.push_back(p[i].second);
	}

	return answer;
}