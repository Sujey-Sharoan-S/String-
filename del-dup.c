#include<stdio.h>
int main()
{
    char A[100];
    int i,j,k;
    scanf("%s",A);
    for(i=0;A[i]!='\0';i++)
    {
        for(j=i+1;A[j]!='\0';j++)
        {
            if(A[i] == A[j])
            {
                for( k=j;A[k]!='\0';k++)
                {
                    A[k] = A[k+1];
                }
                j--;
            }
            
            
        }
    }
    printf("%s",A);
    return 0;
}