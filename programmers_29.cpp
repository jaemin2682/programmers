#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
	string answer = "";
	int size = phone_number.size();
	for (int i = 0; i < size - 4; i++) {
		phone_number.replace(phone_number.begin() + i, phone_number.begin() + i + 1, "*");
	}
	answer = phone_number;
	return answer;
}