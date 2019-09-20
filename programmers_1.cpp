#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int> stu(n);
	for (int i = 0; i < lost.size(); i++) {
		stu[lost[i] - 1] += -1;
	}
	for (int j = 0; j < reserve.size(); j++) {
		stu[reserve[j] - 1] += 1;
	}

	for (int j = 0; j < n; j++) {
		if (stu[j] == -1) {
			if (stu[j - 1] == 1) {
				stu[j - 1] = stu[j] = 0;
			}
			else if (stu[j + 1] == 1) {
				stu[j + 1] = stu[j] = 0;
			}
		}
	}
	int cnt = 0;
	for (int k = 0; k < n; k++) {
		if (stu[k] == -1) cnt++;
	}
	answer = n - cnt;

	for (int i = 0; i < n; i++)   cout << stu[i] << " ";

	return answer;
}