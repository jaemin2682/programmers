#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int count(int num) {
	int cnt = 0;
	while (num > 0) {
		int a = num % 2;
		num /= 2;
		if (a == 1) cnt++;
	}
	return cnt;
}

int solution(int n) {
	int answer = 0;
	int temp = n;

	while (true) {
		temp++;
		if (count(n) == count(temp)) break;
	}
	answer = temp;
	return answer;
}