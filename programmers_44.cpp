#include <vector>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	int size = nums.size() / 2;
	vector<int> v;

	for (int i = 0; i < nums.size(); i++) {
		bool check = false;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == nums[i]) {
				check = true;
				break;
			}
		}
		if (!check) v.push_back(nums[i]);
	}

	if (v.size() >= size) answer = size;
	else answer = v.size();

	return answer;
}