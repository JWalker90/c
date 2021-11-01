#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length;
    int spaces;
    int hashes;
    int row;

    // Prompt for height of pyramid
    do
    {
        length = get_int("\nEnter a height from one to eight: ");
    }
    while (length < 1 || length > 8);

    // Assign top pyramid row values
    spaces = length - 1;
    hashes = 1;
    row = 0;

    // Draw pyramid
    do
    {
        // Draw left pyramid half's spaces
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }

        // Draw left pyramid half's hashes
        for (int i = 0; i < hashes; i++)
        {
            printf("#");
        }

        // Draw middle spaces
        printf("  ");

        // Draw right pyramid half's hashes
        for (int i = 0; i < hashes; i++)
        {
            printf("#");
        }

        // Move to next row
        printf("\n");

        spaces--;
        hashes++;
        row++;
    }
    while (row < length);
}
