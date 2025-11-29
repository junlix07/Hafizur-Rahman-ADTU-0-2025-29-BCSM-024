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

