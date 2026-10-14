#include<stdio.h>
int main()
{
    char A[50] = "Jailer";
    char B[50] = "Coolie";
    int i,j;
    for(i=0,j=0;A[i]!='\0' || B[j]!='\0';i++,j++)
    {
        
        if(i % 2 != 0 ) 
        {
            printf("%c", A[i]);
        }
        if(j % 2 == 0)
        {
            printf("%c", B[j]);
        }

    }
    return 0;
    
}