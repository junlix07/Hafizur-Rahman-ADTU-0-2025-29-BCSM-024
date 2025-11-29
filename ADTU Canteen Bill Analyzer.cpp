/* Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3 */

#include <stdio.h>

int main() {
    int n, m;
    int bill[10][10];
    int i, j;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &bill[i][j]);

    for (i = 0; i < n; i++) {
        int sum = 0;
        for (j = 0; j < m; j++)
            sum += bill[i][j];
        printf("Student %d total: ?%d\n", i + 1, sum);
    }

    int maxDay = 0;
    for (j = 0; j < m; j++) {
        int daySum = 0;
        for (i = 0; i < n; i++)
            daySum += bill[i][j];

        if (j == 0 || daySum > maxDay)
            maxDay = j;
    }

    printf("\nHighest collection on Day %d\n", maxDay + 1);

    int maxSpent = 0;
    for (i = 0; i < n; i++) {
        int total = 0;
        for (j = 0; j < m; j++)
            total += bill[i][j];

        if (total > maxSpent)
            maxSpent = total;
    }

    printf("Highest spender: ");
    for (i = 0; i < n; i++) {
        int total = 0;
        for (j = 0; j < m; j++)
            total += bill[i][j];

        if (total == maxSpent)
            printf("Student %d ", i + 1);
    }

    return 0;
}


