/*
    p is a permuation of size n. 
    Find q such that gcd(pi + qi, p(i + 1) + q(i + 1)) >= 3
    
    soln :- Simple trick is 
    1  2  3   . . . n
  + n n-1 n-2 . . . 1
  (n+1) + (n+1) + (n+1) ... (n+1)
  just find the related number for arr[i] . For ex if arr[i] = 5 then q[i] = 1
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        cout << n - arr[i] + 1 << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
