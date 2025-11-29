/*Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥️ Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1 */
    
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


