#include <bits/stdc++.h>
#include <functional>
using namespace std;

#define ll long long

void solve()
{
    ll n, c;
    cin >> n >> c;

    vector<ll> weight(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    sort(weight.begin(), weight.end(), greater<ll>());

    int pivot = 0;
    for (int i = 0; i < n; i++)
    {
        pivot++;
        for (int j = pivot; j <)
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