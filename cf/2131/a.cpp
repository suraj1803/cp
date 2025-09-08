#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int iter = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i]) {
            iter += a[i] - b[i];
            a[i] = b[i];
            i = 0;
        }
    }

    cout << iter + 1 << endl;
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