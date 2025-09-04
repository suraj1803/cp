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

void unionSet(set<char> &source, set<char> &dest)  {
	for (auto ch: source) {
		dest.insert(ch);
	}
}
void unionSet(set<pair<char, char>> &source, set<pair<char, char>> &dest)  {
	for (auto ch: source) {
		dest.insert(ch);
	}
}
int main()
{
	setIo("tttt");
	
	vector<vector<char>> arr(3, vector<char>(3));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];

	set<char> one;
	set<pair<char, char>> two;


	set<char> s1;
	set<pair<char, char>> s2;

	//rows
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			s1.insert(arr[i][j]);
		}
		if (s1.size() == 1) {
			unionSet(s1, one);
		}
		if (s1.size() == 2) {
			auto it = s1.begin();
			char a = *(it);
			char b = *(++it);
			if (a > b) swap(a, b);
			s2.insert({a, b});
			unionSet(s2, two);
		}

		s1.clear();
		s2.clear();
	}


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			s1.insert(arr[j][i]);
		}
		if (s1.size() == 1) {
			unionSet(s1, one);
		}
		if (s1.size() == 2) {
			auto it = s1.begin();
			char a = *(it);
			char b = *(++it);
			if (a > b) swap(a, b);
			s2.insert({a, b});
			unionSet(s2, two);
		}

		s1.clear();
		s2.clear();
	}



	for (int i = 0; i < 3; i++) {
		s1.insert(arr[i][i]);
	}

	if (s1.size() == 1) {
		unionSet(s1, one);
	}
	if (s1.size() == 2) {
		auto it = s1.begin();
		char a = *(it);
		char b = *(++it);
		if (a > b) swap(a, b);
		s2.insert({a, b});
		unionSet(s2, two);
	}

	s1.clear();
	s2.clear();


	s1.insert(arr[0][2]);
	s1.insert(arr[1][1]);
	s1.insert(arr[2][0]);

	if (s1.size() == 1) {
		unionSet(s1, one);
	}
	if (s1.size() == 2) {
		auto it = s1.begin();
		char a = *(it);
		char b = *(++it);
		if (a > b) swap(a, b);
		s2.insert({a, b});
		unionSet(s2, two);
	}

	s1.clear();
	s2.clear();

	cout << one.size() << endl;
	cout << two.size() << endl;


	return 0;
}
