#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long y, x;
    cin >> y >> x;

    long long max_num = max(x, y) * max(x, y);

    long long res = 0;

    if (y == max(x, y))
    {
        if (y % 2 == 0)
        {
            res = max_num - (x - 1);
        }
        else
        {
            long long start_num = max_num - (y - 1) * 2;
            res = start_num + (x - 1);
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            long long start_num = max_num - (x - 1) * 2;
            res = start_num + (y - 1);
        }
        else
        {
            res = max_num - (y - 1);
        }
    }

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}