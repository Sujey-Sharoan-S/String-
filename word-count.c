/* #include<stdio.h>
int main()
{
    char A[100]="hello hin bye hahah";
    int Count = 0, i;
   
    
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i] == ' ')
        {        
            Count++;
            continue;
            
        }
        
    }
    Count = Count + 1;
        
    printf("%d",Count);
    return 0;
}*/

#include<stdio.h>
int main()
{
    char A[100];
    int Count = 0, i;
    scanf("%[^\n]", A);
   
    
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i] == ' ')
        {        
            Count++;
            continue;
            
        }
        
    }
    Count = Count + 1;
        
    printf("%d",Count);
    return 0;
}