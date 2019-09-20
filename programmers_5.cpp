#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	int x = 0;
	switch (a) {
	case 2: x += 31; break;
	case 3: x += 29 + 31; break;
	case 4: x += 29 + 31 + 31; break;
	case 5: x += 29 + 31 + 31 + 30; break;
	case 6: x += 29 + 31 + 31 + 30 + 31; break;
	case 7: x += 29 + 31 + 31 + 30 + 31 + 30; break;
	case 8: x += 29 + 31 + 31 + 30 + 31 + 30 + 31; break;
	case 9: x += 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31; break;
	case 10: x += 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
	case 11: x += 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
	case 12: x += 29 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
	}
	if ((x + b) % 7 == 0) answer = "THU";
	else if ((x + b) % 7 == 1) answer = "FRI";
	else if ((x + b) % 7 == 2) answer = "SAT";
	else if ((x + b) % 7 == 3) answer = "SUN";
	else if ((x + b) % 7 == 4) answer = "MON";
	else if ((x + b) % 7 == 5) answer = "TUE";
	else answer = "WED";

	return answer;
}