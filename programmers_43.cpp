#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(int m, int n, vector<vector<int>> picture) {
	int number_of_area = 0;
	int max_size_of_one_area = 0;

	vector<vector<int>> visit(m);
	queue<pair<int, int>> q;
	vector<pair<int, int>> dx = { {1,0},{-1,0},{0,1},{0,-1} };
	vector<int> width;

	for (int i = 0; i < m; i++) {
		visit[i].resize(n, 0);
	}

	int cnt = 0;
	int area = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (picture[i][j] && !visit[i][j]) {
				cnt++;
				area++;
				q.push({ i, j });
				visit[i][j] = cnt;
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					for (int k = 0; k < 4; k++) {
						int nx = dx[k].first + x;
						int ny = dx[k].second + y;
						if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
							if (picture[x][y] == picture[nx][ny] && !visit[nx][ny]) {
								q.push({ nx, ny });
								area++;
								visit[nx][ny] = cnt;
							}
						}
					}
				}
				width.push_back(area);
				area = 0;
			}
		}
	}

	int maxi = 0;
	number_of_area = cnt;
	for (int i = 0; i < width.size(); i++) maxi = max(maxi, width[i]);
	max_size_of_one_area = maxi;



	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;

	return answer;
}