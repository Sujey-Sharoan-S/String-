
#include <stdio.h>
#include <string.h>

int main()
{
    char A[50] = "Tomorrow";
    char B[50] = "Today is Sunday";
    int i, j, k, len = strlen(A), lenb = 0, diff;

    // Find the length of the first word in B
    for (i = 0; B[i] != ' '; i++)
    {
        lenb++;
    }

    diff = len - lenb;

    // Shift the remaining characters to the right
    if (diff > 0)
    {
        for (k = strlen(B); k >= lenb; k--)
        {
            B[k + diff] = B[k];
        }
    }

    // Copy A into the beginning of B
    for (j = 0; j < len; j++)
    {
        B[j] = A[j];
    }

    printf("%s\n", B);

    return 0;
}