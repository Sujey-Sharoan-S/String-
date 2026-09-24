#include<stdio.h>
int main()
{
    char A[100] = "qwerty";
    int i, Length = 0;
    for(i=0;A[i]!='\0'; i++)
    {
        Length++;
    }
    printf("Length Of the string is: %d", Length);
    return 0;

    
}