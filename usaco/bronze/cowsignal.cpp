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
	setIo("cowsignal");
	
	int m, n, k;
	cin >> m >> n >> k;

	vector<vector<char>> arr(m, vector<char>(n));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			for (int l = 0; l < n; l++) {
				for (int a = 0; a < k; a++) {
					cout << arr[i][l];
				}
			}
			cout << "\n";
		}
	}


	return 0;
}
