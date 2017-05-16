#include <stdio.h>
#include <string.h>
#define CSI "\x1B\x5B" 

int main(){
FILE *f, *f2;
char search[10] = "my";
char str[20][10] = {"Hello", "my", "frend"};
int b[10][5];
int d = 8;
int i, k = 0;
char colors[][5] = {
 "0;30", /* Black */ "1;30", /* Dark Gray */
 "0;31", /* Red */ "1;31", /* Bold Red */
 "0;32", /* Green */ "1;32", /* Bold Green */
 "0;33", /* Yellow */ "1;33", /* Bold Yellow */
 "0;34", /* Blue */ "1;34", /* Bold Blue */
 "0;35", /* Purple */ "1;35", /* Bold Purple */
 "0;36", /* Cyan */ "1;36" /*Bold Cyan */ };

b[0][0] = 2;
	//f = fopen("file.txt", "r");

		//fgets(g, 10, f);
		//printf("%s\n", g);

	//b = fgetc(f);

		//fscanf(f, "%s", a);
		//printf("%d\n", b[0][0]);

	//f2 = fopen("file2.txt", "a");
		//fprintf(f2, "%s", g);
	
		//fputs(a, f2);
	
	//fprintf(f2, "%d", b[0][0]);	

//Печать цветного текста
/*printf("%s%sm",CSI,colors[13]);
printf("Hello\n");*/ 
	//fclose(f);
	//fclose(f2);

/*str[0] = "Hello";
str[1] = "my";
str[2] = "frend";*/
i = 0;
     for (i = 0; i < 3; i++){
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
      
    // for (i = 0; i < k; i++)
      //   printf("%s ",str[i]);
     //printf("%s%sm",CSI,colors[13]);
     //printf("%s ", str[k]);
     //for (i = k + 1; i < 5; i++)
         //printf("%s ", str[i]);
     //printf("\n"); 


	return 0;

}
