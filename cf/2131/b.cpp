#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    if (n % 2 == 0)
    {
        arr[n - 1] = 2;
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = -1;
            }
            else
            {
                arr[i] = 3;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = -1;
            }
            else
            {
                arr[i] = 3;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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