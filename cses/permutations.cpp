#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    int i = 1;
    while (2 * i <= n)
    {
        cout << 2 * i << " ";
        i++;
    }
    i = 0;
    while (2 * i + 1 <= n)
    {
        cout << 2 * i + 1 << " ";
        i++;
    }
    cout << "\n";

    return 0;
}