#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, k, row, col;
    int **a, **b, **multi;

    printf("Enter the value of rows and columns for the 1st matrix: ");
    scanf("%d %d", &row, &col);

    a = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++) {
        a[i] = (int *)malloc(col * sizeof(int));
    }

    printf("Enter the elements of the 1st matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the value of rows and columns for the 2nd matrix: ");
    scanf("%d %d", &row, &col);

    b = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++) {
        b[i] = (int *)malloc(col * sizeof(int));
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    multi = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++) {
        multi[i] = (int *)malloc(col * sizeof(int));
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            multi[i][j] = 0;
            for (k = 0; k < col; k++) {
                multi[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }

    printf("The result is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}