#include <bits/stdc++.h>
#include <unordered_map>

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
	setIo("cbarn");

	int n;
	cin >> n;
	vector<int> r(n);
	for (int i = 0; i < n; i++) 
		cin >> r[i];


	int res = INT_MAX;
	for (int i = 0; i < n; i++) {
		int dist = 0;
		int steps = 0;
		for (int j = 0; j < n; j++) {
			int idx = (i + j) % n;
			dist += r[idx] * steps;
			steps++;
		}

		res = min(res, dist);
	}

	cout << res << endl;
	
	return 0;
}
