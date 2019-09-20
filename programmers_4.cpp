#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	vector<int> temp;

	int num = arr.size();

	temp.push_back(arr[0]);
	for (int i = 1; i < num; i++) {
		if (arr[i] != arr[i - 1]) {
			temp.push_back(arr[i]);
		}
	}
	answer = temp;

	return answer;
}