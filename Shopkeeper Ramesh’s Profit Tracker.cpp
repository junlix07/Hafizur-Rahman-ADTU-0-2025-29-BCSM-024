#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int profit = 0, loss = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0)
            profit += a[i];
        else if (a[i] < 0)
            loss += -a[i];
    }

    int net = profit - loss;

    cout << "Total Profit: " << profit << endl;
    cout << "Total Loss: " << loss << endl;
    cout << "Net Balance: " << net << endl;

    return 0;
}

