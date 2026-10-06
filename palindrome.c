#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    char B[100];
    scanf("%s",A);
    int i,j,temp, len = strlen(A);
    strcpy(B,A);
    for(i=0,j=len-1;A[i]!='\0' && j>=0;i++,j--)
    {
       B[i] = A[j];
    }
    B[len] = '\0';
    if(strcmp(A,B) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
    
}