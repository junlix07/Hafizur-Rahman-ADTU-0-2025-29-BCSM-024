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

