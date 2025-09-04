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
	setIo("blist");
	int n;
	cin >> n;

	vector<vector<int>> cow(n, vector<int>(3));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> cow[i][j];
		}
	}

	vector<int> time(1000);
	for (int i = 0; i < n; i++)
	{
		for (int j = cow[i][0] - 1; j <= cow[i][1] - 1; j++)
		{
			time[j] += cow[i][2];
		}
	}

	int res = time[0];
	for (int i = 0; i < 1000; i++)
	{
		res = max(res, time[i]);
	}

	cout << res << endl;

	return 0;
}
