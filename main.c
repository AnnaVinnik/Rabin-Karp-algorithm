#include <stdio.h>
#include <string.h>
#include "lib.h"


int main(){
FILE *f, *f2;
char search[] = "lo";
char string[] = "Hello my dear frend, I'm love you";
char *str[10];
int b[10][5];
int hs, hsub;
int i = 0, position = 0, j = 1;

     
     for (i = 0; i < 20; i++){
         if (string[i] == ' '){
             str[j] = &string[i + 1];
             j++;
         }
     }


int sizeString = sizeof(string) / sizeof(char) - 1;
int sizeSearch = sizeof(search) / sizeof(char) - 1;


    hsub = hash_kp(search, 2);
    for (i = 0; i < (sizeString - sizeSearch); i++){
        if (hash_kp(&string[i], 2) == hsub)
        position = i;
    }

    print(string, position, sizeSearch, sizeString);

    return 0;

}
