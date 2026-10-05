#include<stdio.h>
int main()
{
    char A[10] = "Hello";
    char B[10] = "Hello";
    int i,Same = 1;
    for (i=0;A[i]!='\0' || B[i]!='\0';i++)
    {
        if(A[i]!=B[i])
        {
            Same =0;
            
        }
    }
    
    if(Same)
    {printf("Equal");}
    else
    {printf("Not Equal");}
    return 0;

}