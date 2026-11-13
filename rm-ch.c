#include<stdio.h>
#include<string.h>
int main()
{
    char A[100] ="embedded";
    int i,count = 0;
    int len = strlen(A);
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='d')
        {
            A[i] = A[i-1];
            count++;
        }
        
    }
    A[len-count] = '\0';
    printf("%s",A);
}