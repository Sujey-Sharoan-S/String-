#include<stdio.h>
#include<string.h>
int main()
{
    char A[100] ="embedded";
    int i,j;
    int len = strlen(A);
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='d')
        {
            A[i] = A[i+1];
        }
            for(j=0;A[j]!='\0';j++)
            {
                if(A[j]=='d')
                {
                    A[j] = A[j+1];
                }
            }
    }
    A[len-3] = '\0';
    printf("%s",A);
}