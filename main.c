#include <stdio.h>
#define CSI "\x1B\x5B" 

int main(){
FILE *f, *f2;
char a[10];
char g[20];
int b[10][5];
int d = 8;
int i;
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
		printf("%d\n", b[0][0]);

	//f2 = fopen("file2.txt", "a");
		//fprintf(f2, "%s", g);
	
		//fputs(a, f2);
	
	//fprintf(f2, "%d", b[0][0]);	

//Печать цветного текста
/*printf("%s%sm",CSI,colors[13]);
printf("Hello\n");*/ 
	//fclose(f);
	//fclose(f2);

	return 0;

}
