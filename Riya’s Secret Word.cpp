#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    bool palindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}

