#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CSI "\x1B\x5B" 
#define HASH_MUL 31
#define HASH_SIZE 71

int hash_kp(char *key, int i)
{
int j;
    unsigned int h = 0;
    char *p;

    for (p = key, j = 0; j < i; p++, j++){
        h = h * HASH_MUL + (unsigned int)*p;
    }
    return h%HASH_SIZE;
}


void print(char *string, int position, int sizeSearch, int sizeString)
{
char colors[][5] = {
 "0;30", /* Black */ "1;30", /* Dark Gray */
 "0;31", /* Red */ "1;31", /* Bold Red */
 "0;32", /* Green */ "1;32", /* Bold Green */
 "0;33", /* Yellow */ "1;33", /* Bold Yellow */
 "0;34", /* Blue */ "1;34", /* Bold Blue */
 "0;35", /* Purple */ "1;35", /* Bold Purple */
 "0;36", /* Cyan */ "1;36" /*Bold Cyan */ };
int i;	

    for (i = 0; i < position; i++){
        printf("%c", string[i]);
    }
    printf("%s%sm",CSI,colors[9]);
    for (i = position; i < (position + sizeSearch); i++){
        printf("%c", string[i]);
    }
    printf("%s0m",CSI);
    for (i = position + sizeSearch; i < sizeString; i++){
        printf("%c", string[i]);
    }
    printf("\n");
}
