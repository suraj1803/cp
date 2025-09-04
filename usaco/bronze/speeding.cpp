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
	setIo("speeding");

	int n, m;
	cin >> n >> m;
	vector<int> limit(100), bessie(100);

	int length , speed, pos = 0;

	for (int i = 0; i < n; i++) {
		cin >> length >> speed;
		fill(limit.begin() + pos, limit.begin() + pos + length, speed);
		pos += length;
	}


	pos = 0;
	for (int i = 0; i < m; i++) {
		cin >> length >> speed;
		fill(bessie.begin() + pos, bessie.begin() + pos + length, speed);
		pos += length;
	}

	
	int result = 0;
	for (int i = 0; i < 100; i++) {
		result = max(result, bessie[i] - limit[i]);
	}

	cout << result << endl;

	return 0;
}
