#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[100];
	printf ("type here to search => ");
	gets(s);
	int l=0;
	while(s[l]!='\0'){
		l++;
	}
	l++;
	
	FILE *my_files;
	my_files=fopen("coding quotes.txt","r");
		long int offset=1;int t=0;
	while(getc(my_files)!=EOF && t==0){
		char fsentence[100];
		fgets(fsentence,l,my_files);
			if (strcmp(s,fsentence)){
			fseek(my_files,offset,0);
			offset++;
		}
		else{
			t=1;
	       printf("it is in thise file ");
		
}
}
	fclose(my_files);
if (t==0) {
 printf("it is not in thise file ");}
}
