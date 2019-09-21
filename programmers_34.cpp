#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	sort(d.begin(), d.end());
	int size = d.size();

	for (int i = 0; i < size; i++) {
		if (budget - d[i] >= 0) {
			answer++;
			budget -= d[i];
		}
		else break;
	}

	return answer;
}