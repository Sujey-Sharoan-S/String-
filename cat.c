#include<stdio.h>
#include<string.h>
int main()
{
    char a[20] = "Hello";
    char b[20] = "world";
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        
    }
    
    a[i] = ' ';
    i++;
    for(j=0;b[j]!='\0';j++)
    {
            a[i+j]=b[j];
    }
    a[i+j] ='\0';
    printf("%s",a);
    return 0;

}