#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> seoul) {
	string answer = "김서방은 ";
	string second = "에 있다";
	int size = seoul.size();
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (seoul[i] == "Kim") num = i;
	}
	answer = answer + to_string(num) + second;

	return answer;
}