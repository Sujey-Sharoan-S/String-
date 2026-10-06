#include<stdio.h>
#include<string.h>
int main()
{
    char A[100] ="Pumo    India   Pvt    ltd";
    int i,j=0;

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]!= ' ')
        {
            A[j] = A[i];
            
            j++;
            
        }
    }
    A[j] = '\0';
    printf("%s",A);
    return 0;
}