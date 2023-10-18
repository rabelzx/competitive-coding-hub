#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int row[n], column[n];
    for (int i = 0; i < n; i++) {
        row[i] = 0;
        column[i] = 0;
    }

    int availableCells = n * n;
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (row[x - 1] == 0) {
            row[x - 1]++;
            availableCells -= n - column[y - 1];
        }

        if (column[y - 1] == 0) {
            column[y - 1]++;
            availableCells -= n - row[x - 1];
        }

        printf("%d ", availableCells);
    }

    return 0;
}
