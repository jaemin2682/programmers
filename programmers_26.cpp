#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	double sqr = sqrt(n);
	if (pow((int)sqr, 2) == n) answer = pow(sqr + 1, 2);
	else answer = -1;

	return answer;
}