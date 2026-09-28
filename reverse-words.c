#include<stdio.h>

int main()
{
    char A[100];
    scanf("%[^\n]",A);
    int length = 0, i,j,end;
    
    for(i=0; A[i]!='\0'; i++)
    {
        length++;   // finding the length
    }
    end = length -1;    // length will be = \0 So, -1
    for(i=length-1;i>=0;i--)
    {
        if(A[i] == ' ')
        { 
            for(j=i+1;j<=end;j++) // find the first empty space and print till end
            {
                printf("%c",A[j]);
            
            }
            printf(" "); // this is to create a space between two words
            end = i - 1; // this is to -1 from that empty space so it will check the next mt space
        }
        
    }
    for(i=0;i<=end ;i++)
    {
       printf("%c",A[i]); // this is to print the first word in the last cauz there will be no mt spaz in d last
    }
    
            
    return 0;
} // over !!