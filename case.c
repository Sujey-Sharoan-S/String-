#include<stdio.h>
int main()
{
    char A[100];
    scanf("%[^\n]", A);
    int i;  // ASCII 65 - 90 upper 97 -122 lower
    for(i=0;A[i]!='\0';i++)
    {
        if(('A'<= A[i])&&( A[i] <= 'Z'))
        {
            A[i] += 32;
        }
        else if(('a'<= A[i])&&( A[i] <= 'z'))
        {
            A[i] -= 32;            
        }
    }
    printf("%s",A);
    return 0;

}