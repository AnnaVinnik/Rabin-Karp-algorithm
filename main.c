#include <stdio.h>
#include <string.h>
#include "lib.h"
#define CSI "\x1B\x5B" 

int main(){
FILE *f, *f2;
char search[10] = "my";
char string[] = "Hello my dear frend";
char *str[10];
int b[10][5];
int hs, hsub;
int i = 0, k = 0, j = 1;
char colors[][5] = {
 "0;30", /* Black */ "1;30", /* Dark Gray */
 "0;31", /* Red */ "1;31", /* Bold Red */
 "0;32", /* Green */ "1;32", /* Bold Green */
 "0;33", /* Yellow */ "1;33", /* Bold Yellow */
 "0;34", /* Blue */ "1;34", /* Bold Blue */
 "0;35", /* Purple */ "1;35", /* Bold Purple */
 "0;36", /* Cyan */ "1;36" /*Bold Cyan */ };	

//Печать цветного текста
/*printf("%s%sm",CSI,colors[13]);
printf("Hello\n");*/ 
	//fclose(f);
	//fclose(f2);
     
     for (i = 0; i < 20; i++){
         if (string[i] == ' '){
             str[j] = &string[i + 1];
             j++;
         }
     }
     printf("%s\n", str[2]); 
     printf("%d \n", strcmp(search, str[3]));
     /*for (i = 0; i < 3; i++){
         if (strcmp(search, str[i]) == 0)
             k = i;
     }
     for (i = 0; i < k; i++)
         printf("%s ", str[i]);
     printf("%s%sm",CSI,colors[9]);
     printf("%s ", str[k]);
     printf("%s0m",CSI);
     for (i = k + 1; i < 5; i++)
         printf("%s ", str[i]);
     printf("\n");
*/

    hsub = hash_kp(search, 2);
    hs = hash_kp(&string[6], 2);
    printf ("Hash search %d  Hash string %d\n", hs, hsub);
	return 0;

}
