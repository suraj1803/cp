#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    str += '#';
    int count = 1;
    int res = 1;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            count++;
        }
        else
        {
            res = max(count, res);
            count = 1;
        }
    }
    cout << res << endl;

    return 0;
}