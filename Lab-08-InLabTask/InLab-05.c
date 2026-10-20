#include <stdio.h>

int main()
{
    int a[3][3][3];
    int i, j, k, layer1, layer2;
    int same;
    int identicalPairs = 0;
    int distinctPairs = 0;

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

    printf("\n========== ENTERED LAYERS ==========\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nLayer %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                printf("%5d", a[i][j][k]);

            printf("\n");
        }
    }

    printf("\n========== LAYER COMPARISONS ==========\n");

    for (layer1 = 0; layer1 < 3; layer1++)
    {
        for (layer2 = layer1 + 1; layer2 < 3; layer2++)
        {
            same = 1;

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (a[layer1][i][j] !=
                        a[layer2][i][j])
                    {
                        same = 0;
                    }
                }
            }

            printf("\nComparing Layer %d and Layer %d:\n",
                   layer1 + 1, layer2 + 1);

            if (same == 1)
            {
                printf("Result: Layers are IDENTICAL.\n");
                identicalPairs++;
            }
            else
            {
                printf("Result: Layers are DISTINCT.\n");
                distinctPairs++;
            }
        }
    }

    printf("\n========== FINAL SUMMARY ==========\n");
    printf("Total Pair Comparisons = 3\n");
    printf("Identical Layer Pairs = %d\n", identicalPairs);
    printf("Distinct Layer Pairs = %d\n", distinctPairs);

    if (identicalPairs == 3)
        printf("All three layers are identical.\n");
    else if (identicalPairs == 0)
        printf("All three layers are pairwise distinct.\n");
    else
        printf("Some layers are identical and others are distinct.\n");

    return 0;
}
