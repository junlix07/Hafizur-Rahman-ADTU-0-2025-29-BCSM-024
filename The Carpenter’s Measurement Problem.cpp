#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}

