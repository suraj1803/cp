#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    long long res = 0;

    for (int i = n - 1; i >= 0; i -= 2)
    {
        res += arr[i];
    }

    cout << res << "\n";
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
