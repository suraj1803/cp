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
	setIo("lostcow");

	int x, y;
	cin >> x >> y;

	int source = x;
	int dest = x;
	int result = 0;
	int dir = 1;
	int i = 1;

	while (true) {
		if (dir) {
			dest = x + i;
			if (source <= dest && y >= source && y <= dest) {
				break;
			}
		}
		else {
			dest = x - i;
			if (source >= dest && y >= dest && y <= source) {
				break;
			}
		}

		result += abs(dest - source);
		i *= 2;
		source = dest;
		if (dir == 1) 
			dir = 0;
		else dir = 1;
	}

	result += abs(y - source);

	cout << result << endl;

	return 0;
}
