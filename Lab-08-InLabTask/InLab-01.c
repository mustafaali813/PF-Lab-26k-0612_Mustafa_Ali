#include <stdio.h>

int main()
{
    int a[3][3], transpose[3][3];
    int cofactor[3][3], adjoint[3][3];
    float inverse[3][3];
    int i, j, determinant;

    printf("Enter the elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    /* Transpose */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            transpose[i][j] = a[j][i];

    printf("\nTranspose Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", transpose[i][j]);
        printf("\n");
    }

    /* Cofactor Matrix */
    cofactor[0][0] = a[1][1]*a[2][2] - a[1][2]*a[2][1];
    cofactor[0][1] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
    cofactor[0][2] = a[1][0]*a[2][1] - a[1][1]*a[2][0];

    cofactor[1][0] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
    cofactor[1][1] = a[0][0]*a[2][2] - a[0][2]*a[2][0];
    cofactor[1][2] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);

    cofactor[2][0] = a[0][1]*a[1][2] - a[0][2]*a[1][1];
    cofactor[2][1] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
    cofactor[2][2] = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    printf("\nCofactor Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", cofactor[i][j]);
        printf("\n");
    }

    /* Determinant */
    determinant =
        a[0][0]*cofactor[0][0] +
        a[0][1]*cofactor[0][1] +
        a[0][2]*cofactor[0][2];

    printf("\nDeterminant = %d\n", determinant);

    /* Adjoint = Transpose of Cofactor */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            adjoint[i][j] = cofactor[j][i];

    printf("\nAdjoint Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", adjoint[i][j]);
        printf("\n");
    }

    /* Inverse */
    if (determinant == 0)
    {
        printf("\nInverse does not exist.");
    }
    else
    {
        printf("\nInverse Matrix:\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                inverse[i][j] =
                    (float)adjoint[i][j] / determinant;

                printf("%8.3f", inverse[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
