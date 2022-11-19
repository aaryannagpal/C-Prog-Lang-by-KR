/*Using external variables*/
#include <stdio.h>

#define MAX 1000 //max input for a line

int max;
char line[MAX];
char longest[MAX];

int getLine(void);
void copy(void);

/*Specialized longest line*/

main(){
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getLine()) > 0){
        if (len > max){
            max = len;
            copy();
        }
    }
    if (max > 0){
        printf("%s", longest);
    }
    return 0;
}

//specialised getLine() function

int getLine(void){
    int c, i;
    extern char line[];

    for (i = 0; i < MAX - 1 && (c = getchar())!= EOF && c != '\n'; i++){
        line[i] = c;
    }
    if (c != '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

//specialised copy() function

void copy(void){
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0'){
        i++;
    }
}

//do all extern declarations at the beginning of the program to ommit the need to declare them again and again

//not recommended to use for single file programs, but instead in programs where you need to traverse the variables thru different files
//a compilation of such files are referred to has header files, with the externsion of .h