/*HOSTEL ATTENDANCE TRACKER 
Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2 */
    
#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    for (i = 0; i < 10; i++)
        for (j = 0; j < 7; j++)
            scanf("%d", &A[i][j]);

    int studentSum[10];

    for (i = 0; i < 10; i++) {
        studentSum[i] = 0;
        for (j = 0; j < 7; j++)
            studentSum[i] += A[i][j];
    }

    int maxAttendance = studentSum[0];
    int maxStudent = 1;

    for (i = 1; i < 10; i++) {
        if (studentSum[i] > maxAttendance) {
            maxAttendance = studentSum[i];
            maxStudent = i + 1;
        }
    }

    int daySum[7];

    for (j = 0; j < 7; j++) {
        daySum[j] = 0;
        for (i = 0; i < 10; i++)
            daySum[j] += A[i][j];
    }

    int minAttendance = daySum[0];
    int minDay = 1;

    for (j = 1; j < 7; j++) {
        if (daySum[j] < minAttendance) {
            minAttendance = daySum[j];
            minDay = j + 1;
        }
    }

    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++)
        printf("Student %d: %d\n", i + 1, studentSum[i]);

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           maxStudent, maxAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", minDay);

    return 0;
}


