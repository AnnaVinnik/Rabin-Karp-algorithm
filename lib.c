#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

