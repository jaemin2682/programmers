#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	double num = arr.size();
	double sum = 0;
	for (int i = 0; i < num; i++) {
		sum += arr[i];
	}
	answer = sum / num;
	return answer;
}