#include<stdio.h>
int main()
{
    char A[10] = "Hello";
    char B[10] = "HellO";
    char a,b;
    int i,j;
    for (i=0;A[i]!='\0';i++)
    {
        a=A[i];
    }
    
    for(j=0;B[j]!='\0';j++)
    {
        b=B[j];
    }
    if(a == b)
    {printf("same");}
    else
    {printf("not equal");}
    return 0;

}