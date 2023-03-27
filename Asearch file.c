#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	char s[20]; char file[20];char M[20];
	printf("enter the name of file which we will search into ");
	gets(file);
	printf ("type here to search => ");
	gets(s);
	

	
	FILE *my_file;
	my_file=fopen(file,"r");
		long int offset=0;int t=0;
	while(getc(my_file)!=EOF && t==0){
	    int n=0;  fseek(my_file,offset,0);
	    while (fgetc(my_file)!=' '){
	    fseek(my_file,offset,0);
		M[n]=fgetc(my_file);
		n++;  offset++;	
		}
		offset++;
		if(!strcmp(M,s)){
			t=1;
	       printf("it is in thise file ");
	    }
	memset(M,0,strlen(M));
	}


	fclose(my_file);
if (t==0) {
 printf("it is not in thise file ");}
 
 
}

