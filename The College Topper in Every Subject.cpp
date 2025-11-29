#include <iostream>
using namespace std;

int main() {
    int marks[5][3];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            cin >> marks[i][j];

    int maxMath = marks[0][0];
    int maxPhy = marks[0][1];
    int maxCS = marks[0][2];

    for (int i = 1; i < 5; i++) {
        if (marks[i][0] > maxMath)
            maxMath = marks[i][0];
        if (marks[i][1] > maxPhy)
            maxPhy = marks[i][1];
        if (marks[i][2] > maxCS)
            maxCS = marks[i][2];
    }

    cout << "Highest marks in Mathematics: " << maxMath << endl;
    cout << "Highest marks in Physics: " << maxPhy << endl;
    cout << "Highest marks in Computer Science: " << maxCS << endl;

    return 0;
}

