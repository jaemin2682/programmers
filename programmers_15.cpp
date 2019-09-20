#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int pnum = 0, ynum = 0;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		if (s[i] >= 97) s[i] -= 32;
	}

	for (int i = 0; i < size; i++) {
		if (s[i] == 'P') pnum++;
		else if (s[i] == 'Y') ynum++;
	}

	if (pnum != ynum) answer = false;

	return answer;
}