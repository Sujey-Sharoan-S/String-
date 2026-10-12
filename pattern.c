#include<stdio.h>
int main()
{
    char A[10] = 'ABC';
    char B[10] = '123';
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        printf("%c%c",A[i],B[i]);
    }
    return 0;

    
}