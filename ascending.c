#include<stdio.h>
int main()
{
    char A[100];
    scanf("%s",A);
    int i,Temp;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i] < A[i+1])
        {
            Temp = A[i];
            A[i] = A[i+1];
            A[i+1] = Temp;
        }
        else
        {
            continue;
        }
    }
    printf("The sorted string is: %s",A);
    return 0;

}