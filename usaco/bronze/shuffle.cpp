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
	setIo("shuffle");
	
	int n;
	cin >> n;

	vector<int> pos(n);
	for (int i = 0; i < n; i++) {
		cin >> pos[i];
		pos[i] -= 1;
	}

	vector<int> inId(n);
	for (int i = 0; i < n; i++) {
		cin >> inId[i];
	}


	vector<int> id(n);
	for (int i = 0; i < n; i++) {
		id[i] = i + 1;
	}

	vector<int> finalId(n);
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < n; i++) {
			finalId[pos[i]] = id[i];
		}

		for (int i = 0; i < n; i++) {
			id[i] = finalId[i];
		}
	}

	unordered_map<int, int> um;
	for (int i = 0; i < n; i++) {
		um[finalId[i]] = inId[i];
	}

	for (int i = 0; i < n; i++) {
		cout << um[i + 1] << "\n";
	}

	return 0;
}
