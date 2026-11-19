#include<stdio.h>

int main()
{
    char A[] = "hELLO wORLD sujEY";
    for(int i = 0;A[i]!='\0'; i++)
    {
        if (i == 0 || A[i-1] == ' ')
        {
            if ('a'<= A[i] && A[i] <= 'z')
            A[i] -= 32;
        }
        else if ('A'<= A[i] && A[i] <= 'Z')
        {
                A[i] += 32;
        }

    }
    printf("%s", A);
    return 0;
}