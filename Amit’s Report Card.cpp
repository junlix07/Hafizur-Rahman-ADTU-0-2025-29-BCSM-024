#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int marks[n];
    for (int i = 0; i < n; i++)
        cin >> marks[i];

    int highest = marks[0];
    int lowest = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    cout << "Highest = " << highest << endl;
    cout << "Lowest = " << lowest << endl;

    return 0;
}

