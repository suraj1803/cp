#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void setIo(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIo("shell");
    int n;
    cin >> n;
    vector<int> arr(4);
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = i;
    }

    vector<int> result(4);

    while (n--) {
        int a, b, g;
        cin >> a >> b >> g;

        swap(arr[a], arr[b]);
        result[arr[g]]++;
    }

    int mx = result[1];

    for (int i = 1; i < result.size(); i++) {
        if (result[i] >= mx) {
            mx = result[i];
        }
    }
    cout << mx << endl;

    return 0;
}
