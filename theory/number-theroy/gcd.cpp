/*
  Algorithm for finding gcd of number n
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    cout << gcd(20, 12) << endl;

	return 0;
}
