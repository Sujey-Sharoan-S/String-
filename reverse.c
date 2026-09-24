#include<stdio.h>
int main()
{
    char A[100];
    scanf("%s", A);
    int i,j,temp, length=0;
    for(i=0; A[i]!='\0'; i++)
    {
        length++;
    }
    for(i=length-1,j=0;i>=j;i--,j++)
    {
        temp = A[j];
        A[j] = A[i];
        A[i] = temp;
        
    }
    printf("%s",A);
    
        
    
    return 0;
    
    
}
