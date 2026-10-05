/*#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    scanf("%[^\n]",A);
    int i = 0, start = 0, maxLen = 0, maxStart = 0, len = strlen(A);

    while (i <= len) 
    {
        if (A[i] == ' ' || A[i] == '\0')
        {
            int wordLen = i - start;
            if (wordLen > maxLen) 
            {
                maxLen = wordLen;
                maxStart = start;
            }
            start = i + 1; // move to next word
        }
        i++;
    }

    printf("Biggest word: ");
    for (i = 0; i < maxLen; i++) {
        printf("%c", A[maxStart + i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    int i, len = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    scanf("%[^\n]", A);  // read full sentence
    int n = strlen(A);

    for (i = 0; i <= n; i++) {
        if (A[i] != ' ' && A[i] != '\0') {
            len++;  // counting current word length
        } else {
            // word ended
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;  // remember where longest word starts
            }
            len = 0;          // reset for next word
            start = i + 1;    // next word starts after space
        }
    }

    printf("Biggest word: ");
    for (i = 0; i < maxLen; i++) {
        printf("%c", A[maxStart + i]);
    }
    printf("\n");

    return 0;
} */
#include <stdio.h>
#include<string.h>
int main()
{
    char A[100];
    int i, len = 0, maxlen =0;
    scanf("%[^\n]", A);
    int maxstart = 0, start = 0;
    int n = strlen(A);
    for(i = 0; i< n; i++)
    {
        if(A[i] != ' ' && A[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len>maxlen)
            {
                maxlen = len;
                maxstart =start;
            }
            len = 0;
            start = i+1;
            
        }
        
    }
    if(len>maxlen)
    {
      maxlen = len;
      maxstart =start;
    }

    printf("Biggest word: ");
    for(i=maxstart; i<maxstart+maxlen; i++)
    {
        printf("%c", A[i]);
    }
    return 0;
}