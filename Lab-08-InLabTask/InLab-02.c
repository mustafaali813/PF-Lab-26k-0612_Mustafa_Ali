#include <stdio.h>

#define MAX 5

int determinant(int a[MAX][MAX], int n)
{
    int minor[MAX][MAX];
    int i, j, r, c, sign, det = 0;

    if (n == 1)
        return a[0][0];

    for (c = 0; c < n; c++)
    {
        r = 0;

        for (i = 1; i < n; i++)
        {
            int col = 0;

            for (j = 0; j < n; j++)
            {
                if (j != c)
                    minor[r][col++] = a[i][j];
            }
            r++;
        }

        sign = (c % 2 == 0) ? 1 : -1;
        det += sign * a[0][c] * determinant(minor, n - 1);
    }

    return det;
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX];
    int power[MAX][MAX], temp[MAX][MAX];
    int rows, cols, i, j, k, p;
    int square, rectangular, zero, identity;
    int diagonal, scalar, upper, lower;
    int symmetric, skew, equal = 0;
    int idempotent = 0, nilpotent = 0;
    int det;

    printf("Enter rows and columns (1 to 5): ");
    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > MAX ||
        cols < 1 || cols > MAX)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }

    square = (rows == cols);
    rectangular = (rows != cols);
    zero = 1;
    identity = square;
    diagonal = square;
    scalar = square;
    upper = square;
    lower = square;
    symmetric = square;
    skew = square;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] != 0)
                zero = 0;

            if (i != j && a[i][j] != 0)
            {
                identity = 0;
                diagonal = 0;
                scalar = 0;
            }

            if (i == j && square && a[i][j] != 1)
                identity = 0;

            if (i == j && square && i > 0 &&
                a[i][j] != a[0][0])
                scalar = 0;

            if (i < j && a[i][j] != 0)
                lower = 0;

            if (i > j && a[i][j] != 0)
                upper = 0;

            if (square)
            {
                if (a[i][j] != a[j][i])
                    symmetric = 0;

                if (a[i][j] != -a[j][i])
                    skew = 0;
            }
        }
    }

    printf("\n--- MATRIX TYPES ---\n");

    if (square)
        printf("Square Matrix\n");
    if (rectangular)
        printf("Rectangular Matrix\n");
    if (zero)
    {
        printf("Zero Matrix\n");
        printf("Null Matrix\n");
    }
    if (identity)
        printf("Identity Matrix\n");
    if (diagonal)
        printf("Diagonal Matrix\n");
    if (scalar)
        printf("Scalar Matrix\n");
    if (upper)
        printf("Upper Triangular Matrix\n");
    if (lower)
        printf("Lower Triangular Matrix\n");
    if (symmetric)
        printf("Symmetric Matrix\n");
    if (skew)
        printf("Skew-Symmetric Matrix\n");
    if (rows == 1)
        printf("Row Matrix\n");
    if (cols == 1)
        printf("Column Matrix\n");

    /* Equal matrix check */
    printf("\nCompare with another matrix? (1=Yes, 0=No): ");
    scanf("%d", &k);

    if (k == 1)
    {
        printf("Enter the second matrix:\n");

        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
                scanf("%d", &b[i][j]);

        equal = 1;

        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
                if (a[i][j] != b[i][j])
                    equal = 0;

        if (equal)
            printf("Equal Matrices\n");
        else
            printf("Matrices are Not Equal\n");
    }

    if (square)
    {
        det = determinant(a, rows);

        if (det == 0)
            printf("Singular Matrix\n");
        else
            printf("Non-Singular Matrix\n");

        /* Calculate A squared */
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                temp[i][j] = 0;

                for (k = 0; k < cols; k++)
                    temp[i][j] += a[i][k] * a[k][j];
            }
        }

        idempotent = 1;

        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
                if (temp[i][j] != a[i][j])
                    idempotent = 0;

        if (idempotent)
            printf("Idempotent Matrix\n");

        /* Check A^n for nilpotency */
        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
                power[i][j] = a[i][j];

        for (p = 2; p <= rows; p++)
        {
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                {
                    temp[i][j] = 0;

                    for (k = 0; k < cols; k++)
                        temp[i][j] += power[i][k] * a[k][j];
                }
            }

            nilpotent = 1;

            for (i = 0; i < rows; i++)
                for (j = 0; j < cols; j++)
                    if (temp[i][j] != 0)
                        nilpotent = 0;

            if (nilpotent)
                break;

            for (i = 0; i < rows; i++)
                for (j = 0; j < cols; j++)
                    power[i][j] = temp[i][j];
        }

        if (rows == 1 && a[0][0] == 0)
            nilpotent = 1;

        if (nilpotent)
            printf("Nilpotent Matrix\n");
    }
    else
    {
        printf("Singular/Non-Singular, Identity, Diagonal, ");
        printf("Symmetric, Idempotent and Nilpotent checks ");
        printf("require a square matrix.\n");
    }

    return 0;
}
