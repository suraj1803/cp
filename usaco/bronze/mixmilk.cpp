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
  setIo("mixmilk");

  vector<vector<int>> arr(3, vector<int>(2));
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> arr[i][j];
    }
  }

  int i = 0;
  for (int j = 0; i < 100; j = (j + 1) % 3)
  {
    int c = j;
    int n = (j + 1) % 3;
    int r = arr[n][0] - arr[n][1];
    if (arr[c][1] >= r)
    {
      arr[c][1] -= r;
      arr[n][1] += r;
    }
    else
    {
      int temp = arr[c][1];
      arr[c][1] = 0;
      arr[n][1] += temp;
    }

    // cout << c + 1 << " to " << n + 1 << " -> " << arr[0][1] << " " << arr[1][1] << " " << arr[2][1] << endl;

    i++;
  }

  for (int i = 0; i < 3; i++)
  {
    cout << arr[i][1] << "\n";
  }

  return 0;
}