#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
	bool answer = true;
	string str = to_string(x);
	int size = str.size();
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += str[i] - 48;
	}

	if (x%sum != 0) answer = false;

	return answer;
}