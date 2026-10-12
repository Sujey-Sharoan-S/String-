#include<stdio.h>
int main()
{
    char A[100];
    scanf("%s",A);
    int i,j,Temp = 0;
    for(i=0;A[i]!='\0';i++)
    {
        for(j=i+1;A[j]!='\0';j++)
        {
        if(A[i] > A[j])
        {
            Temp = A[i];
            A[i] = A[j];
            A[j] = Temp;
        }
        }
    }
    printf("The sorted string is: %s",A);
    return 0;

}