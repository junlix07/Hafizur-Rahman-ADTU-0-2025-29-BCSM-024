#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}

