#include<stdio.h>
int main()
{
    char A[100];
    scanf("%[^\n]",A);
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]==' ' && A[i+1] ==' ')
       {
        for(j=i;A[j]!='\0';j++)
        {
          A[j] = A[j+1];
        
        }
        i=0;
       }
    }
    A[i] = '\0'; 
    printf("%s",A);
    return 0;

}
/*
#include<stdio.h>
int main()
{
    char A[100];
    scanf("%[^\n]",A);
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]==' ' && A[i+1] ==' ')
       {
        for(j=i;A[j]!='\0';j++)
        {
          A[j] = A[j+1];
        
        }
        i--;
       }
    }
   
    printf("%s",A);
    return 0;

}

*/