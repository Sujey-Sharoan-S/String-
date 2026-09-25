#include<stdio.h>
int main()
{
    int length = 0,i,j,m,k=0;
    char Dup[100];
    char A[100];
    scanf("%s",A);
    
    for(int i=0;A[i] !='\0';i++)
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            if((A[i] == A[j]) && (i != j))
            {
                int already = 0;
                for(m=0;m<k;m++)
                {
                    if(Dup[m] == A[i])
                    {
                        already = 1;
                        break;
                        
                    }
                }
                if(!already)
                {    
                Dup[k] = A[j];
                k++;
                }
            }
        }
    }
    Dup[k] = '\0';
    printf("%s", Dup);
    return 0;

}