#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
	int answer = 0;
	string temp;
	temp = to_string(n);
	int size = temp.size();

	for (int i = 0; i < size; i++) {
		answer += temp[i] - 48;
	}

	return answer;
}