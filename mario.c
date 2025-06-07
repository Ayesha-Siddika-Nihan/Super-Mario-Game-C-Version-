#include <stdio.h>

int main(void)
{
    int height;

    // Get valid height between 1 and 8
    do
    {
        printf("Height (1–8): ");
        if (scanf("%d", &height) != 1)
        {
            // Clear invalid input
            while (getchar() != '\n');
            height = 0; // Reset height to force re-prompt
        }
    }
    while (height < 1 || height > 8);

    // Loop to build the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print left spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print left hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right hashes
        for (int t = 0; t <= i; t++)
        {
            printf("#");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
