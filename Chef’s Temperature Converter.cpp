#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float C;
    cin >> C;

    float F = (C * 9 / 5) + 32;

    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit = " << F << endl;

    return 0;
}

