#include<stdio.h>
int main()
{
    char a[10] = "Hello";
    char b[10] = "world";
    int i;
    for(i=0;b[i]!='\0';i++)
    {
        a[i] = b[i];
    }
    printf("%s",a);
    return 0;

}