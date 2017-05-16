#include <stdio.h>
#include <string.h>
#include "lib.h"

int proverka(char *string, char *search, int position, int sizeSearch)
{
     for(int i = 0; i < sizeSearch; i++){
         if (string[i + position] != search[i])
              return 1;
     }
     return 0;

}


int main()
{
FILE *f, *f2;
char search[] = "lo";
char string[] = "Hello my dear friend, I'm love you, my love";
char *str[10];
int b[10][5];
int hs, hsub;
int i = 0, position[10] = {}, j = 1;

     
     for (i = 0; i < 20; i++){
         if (string[i] == ' '){
             str[j] = &string[i + 1];
             j++;
         }
     }


int sizeString = sizeof(string) / sizeof(char) - 1;
int sizeSearch = sizeof(search) / sizeof(char) - 1;


    hsub = hash_kp(search, 2);
    for (i = 0, j = 0; i < (sizeString - sizeSearch); i++){
        if (hash_kp(&string[i], 2) == hsub){
            if (proverka(string, search, i, sizeSearch) == 0){
                position[j] = i;
                j++;
            }
        }
    }

    print(string, position, sizeSearch, sizeString, search);

    return 0;

}
