#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char __rand_char(){
	char *l="abcdefghijklmnopqrstuvwxyz";
	return l[rand() % 26];
}
void randomize(char *str){
	register int counter=0;
	for (; counter<11; counter++){
		*(str+counter)=__rand_char();
	}
}
int main(void){
	srand(time(0)); //initializing your mother's PRNG with seed.
	char str[12];
	memset(str,0,sizeof(char)*12/sizeof(char));
	str[11]='\0';
	char cmpstr[]="Hello World";
	while(strcmp(cmpstr,str)!=0){
		randomize(str);
		puts(str);
		sleep(1); //added this for torturing purposes.
	}
	return 0;
}
