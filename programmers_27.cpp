#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	int gcd = 0, lcd = 0;

	for (int j = 1;; j++) {
		lcd = n * j;
		if (lcd%m == 0) break;
	}

	for (gcd = n;; gcd--) {
		if (m%gcd == 0 && n%gcd == 0) break;
	}

	answer.push_back(gcd);
	answer.push_back(lcd);

	return answer;
}