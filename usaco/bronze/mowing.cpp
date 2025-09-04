#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void setIo(string s)
{
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
	// setIo("mowing");
	
	int n;
	cin >> n;
	vector<pair<char, int>> moves(n);
	for (int i = 0; i < n; i++) {
		cin >> moves[i].first >> moves[i].second;
	}

	// points[i].first -> (x, y) cordinate
	// points[i].second -> time at which it was mowed
	
	map<pair<int, int>, int> points;
	pair<int, int> start = {0, 0};

	points[{start.first , start.second}] = 0;

	int time = 1;

	int res = -1;
	for (int i = 0; i < n; i++) {
		pair<int, int> dest;
		for (int j = 1; j <= moves[i].second; j++) {
			if (moves[i].first == 'N') {
				if (points.find({start.first , start.second + j}) != points.end()) {
					// cout << start.first << " " << start.second + j << endl;
					if (res == -1) {
						res = time - points[{start.first, start.second + j}];
					}
					else {
						res = min(res, time - points[{start.first, start.second + j}]);
					}
					// cout << res << endl;
				}
				else {
					points[{start.first, start.second + j}] = time++;
				}
				dest = {start.first, start.second + j};
			}
			else if (moves[i].first == 'S') {
				if (points.find({start.first, start.second - j}) != points.end()) {
					// cout << start.first << " " << start.second - j << endl;
					
					if (res == -1) {
						res = time - points[{start.first, start.second - j}];
					}
					else  {
						res = min(res, time - points[{start.first , start.second - j}]);
					}
					// cout << res << endl;
				}
				else {
					points[{start.first, start.second - j}] = time++;
				}
				dest = {start.first, start.second - j};
			}
			else if (moves[i].first == 'E') {
				if (points.find({start.first + j, start.second }) != points.end()) {
					// cout << start.first + j<< " " << start.second  << endl;
					if (res == -1) {
						res = time - points[{start.first + j, start.second }];
					}
					else {
						res = min(res, time - points[{start.first + j, start.second }]);
					}
					// cout << res << endl;
				}
				else {
					points[{start.first + j , start.second}] = time++;
				}
				dest = {start.first + j, start.second };
			}
			else if (moves[i].first == 'W') {
				if (points.find({start.first - j, start.second }) != points.end()) {
					// cout << start.first - j<< " " << start.second  << endl;
					if (res == -1) {
						res = time - points[{start.first - j, start.second }];
					}
					else {
						res = min(res, time - points[{start.first - j, start.second }]);
					}
					// cout << res << endl;
				}
				else {
					points[{start.first - j, start.second}] = time++;
				}
				dest = {start.first - j, start.second };
			}
		}

		start = dest;
		// cout << "start -> " << start.first << ", " << start.second << "\n";
	}
	cout << res << endl;

	return 0;
}
