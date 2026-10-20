#include <stdio.h>

int main()
{
    int a[3][3][3];
    int i, j, k;
    int layerSum, overallSum = 0;
    int maximum, minimum;
    int count = 0;
    float layerAverage, overallAverage;

    printf("Enter 27 elements for the 3x3x3 array:\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter elements for Layer %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    maximum = a[0][0][0];
    minimum = a[0][0][0];

    printf("\n========== LAYER ANALYSIS ==========\n");

    for (i = 0; i < 3; i++)
    {
        layerSum = 0;

        printf("\nLayer %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%5d", a[i][j][k]);

                layerSum += a[i][j][k];
                overallSum += a[i][j][k];
                count++;

                if (a[i][j][k] > maximum)
                    maximum = a[i][j][k];

                if (a[i][j][k] < minimum)
                    minimum = a[i][j][k];
            }

            printf("\n");
        }

        layerAverage = layerSum / 9.0;

        printf("Layer Total = %d\n", layerSum);
        printf("Layer Average = %.2f\n", layerAverage);
    }

    overallAverage = (float)overallSum / count;

    printf("\n========== OVERALL ANALYSIS ==========\n");
    printf("Total Elements = %d\n", count);
    printf("Overall Sum = %d\n", overallSum);
    printf("Overall Average = %.2f\n", overallAverage);
    printf("Maximum Element = %d\n", maximum);
    printf("Minimum Element = %d\n", minimum);
    printf("Range = %d\n", maximum - minimum);

    return 0;
}
