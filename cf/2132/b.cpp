#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    int k = 1;
    int i = 0;
    vector<long long> arr;
    while (i <= 21)
    {
        if (n % (1 + (long long)pow(10, k)) == 0)
        {
            arr.push_back(n / (1 + (long long)pow(10, k)));
        }
        k++;
        i++;
    }
    cout << arr.size() << "\n";
    if (arr.size() != 0)
    {
        sort(arr.begin(), arr.end());
        for (auto &item : arr)
        {
            cout << item << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}