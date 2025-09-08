#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, c;
    cin >> n >> c;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    multiset<long long> less;
    multiset<long long> big;

    int destroyed = 0;

    int coins = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= c)
        {
            less.insert(arr[i]);
        }
        else
        {
            big.insert(arr[i]);
        }
    }
    while (true)
    {

        if (less.size() == 0)
        {
            cout << big.size() << endl;
            return;
        }
        // largest element which is <= c
        less.erase(*(prev(less.end())));
        multiset<int> temp;
        for (auto item : less)
        {
            temp.insert(item * 2);
        }
        less.clear();
        for (auto item : temp)
        {
            less.insert(item);
        }

        temp.clear();
        for (auto item : big)
        {
            temp.insert(item * 2);
        }
        big.clear();
        for (auto item : temp)
        {
            big.insert(item);
        }
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