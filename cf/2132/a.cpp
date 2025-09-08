#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    string a, b, c;
    cin >> n >> a;
    cin >> m >> b;
    cin >> c;

    string res = a;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 'D')
        {
            res += b[i];
        }
        else if (c[i] == 'V')
        {
            res = b[i] + res;
        }
    }

    cout << res << endl;
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