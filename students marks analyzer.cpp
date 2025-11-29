#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int marks[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    float average = (float) total / n;

    cout << "Total Marks = " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average Marks = " << average << endl;

    return 0;
}

