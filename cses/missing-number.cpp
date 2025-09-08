#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    long long curr_sum = 0;
    n -= 1;
    while (n--)
    {
        long long a;
        cin >> a;
        curr_sum += a;
    }
    cout << sum - curr_sum << endl;
    return 0;
}