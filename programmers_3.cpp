#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> temp;

	for (int i = 0; i < commands.size(); i++) {
		vector<int> temp = array;
		temp.erase(temp.begin(), temp.begin() + commands[i][0] - 1);
		temp.erase(temp.begin() + commands[i][1] - commands[i][0] + 1, temp.end());
		sort(temp.begin(), temp.end());
		for (int i = 0; i < temp.size(); i++) cout << temp[i] << " ";
		cout << endl;
		answer.push_back(temp[commands[i][2] - 1]);
	}
	return answer;
}