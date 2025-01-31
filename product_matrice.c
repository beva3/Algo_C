#include <stdio.h>
#include <stdlib.h>

int **prd_m(int **a, int **b, int m, int p, int n) {
    int **c = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        c[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

void print_m(int **a, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d%c", a[i][j], j == n - 1 ? '\n' : ' ');
    }
}

int **convert_to_dynamic(int arr[3][3], int m, int n) {
    int **mat = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        mat[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            mat[i][j] = arr[i][j];
        }
    }
    return mat;
}

void free_matrix(int **mat, int m) {
    for (int i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);
}

int main() {
    int a[3][3] = {
        {1, 0, 0},
        {0, 2, 1},
        {3, 0, 0}
    };
    int b[3][3] = {
        {0, 1, 0},
        {2, 0, 1},
        {1, 0, 2}
    };

    int **m_a = convert_to_dynamic(a, 3, 3);
    int **m_b = convert_to_dynamic(b, 3, 3);

    int **c = prd_m(m_a, m_b, 3, 3, 3);
    print_m(c, 3, 3);

    // Libérer la mémoire
    free_matrix(m_a, 3);
    free_matrix(m_b, 3);
    free_matrix(c, 3);

    return 0;
}
