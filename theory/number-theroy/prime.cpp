/*
    Algorithm for prime factorization
    Input : n, the number to be factorized
    Output : v, a list of all the prime factors
*/
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> factorize(int n) {
    vector<int> arr;
    for (int i = 2; i * i < n; i++) {
        while ( n % i == 0) {
            n /= i;
            arr.push_back(i);
        }
    }
    return arr;
}

int main() {
    auto arr = factorize(252);
    for (auto item: arr) {
        cout << item << " ";
    }
    cout << "\n";

	return 0;
}
