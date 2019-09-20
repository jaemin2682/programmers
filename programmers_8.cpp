#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int per1[5] = { 1,2,3,4,5 };
	int per2[8] = { 2,1,2,3,2,4,2,5 };
	int per3[10] = { 3,3,1,1,2,2,4,4,5,5 };

	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	int size = answers.size();
	for (int i = 0; i < size; i++) {
		if (answers[i] == per1[i % 5]) cnt1++;
		if (answers[i] == per2[i % 8]) cnt2++;
		if (answers[i] == per3[i % 10]) cnt3++;
	}
	vector<int> m;

	m.push_back(cnt1);
	m.push_back(cnt2);
	m.push_back(cnt3);

	int maxi = max(m[0], m[1]);
	maxi = max(maxi, m[2]);

	for (int i = 1; i <= 3; i++) {
		if (m[i - 1] == maxi) answer.push_back(i);
	}

	sort(answer.begin(), answer.end());

	return answer;
}