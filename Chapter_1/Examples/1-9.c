/*Take input of lines, print longest*/

#include <stdio.h>
#define MAXLINE 1000 //max length of input line

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len; //current line length
    int max; //maximum length encountered so far
    
    char line[MAXLINE]; //current input line
    char longest[MAXLINE]; //longest line yet stored here

    max = 0;

    while ((len = getline(line, MAXLINE)) > 0){ //not an empty line
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){ //meaning line even existed
        printf("%s", longest);
    }
    return 0;
}

//read a line into s, return length

int getline(char s[], int lim){
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar())!= EOF && c!='\n'; ++i){
        s[i] = c;
    }

    if (c == '\n'){
        s[i] = c;
        ++i;
    } //seperately giving '/n' an index, out of the loop to signify the string is seperated when newline is written

    s[i] = '\0'; //NULL character is always at the end of a string and signifies the line ended
    return i; //returning the largest value of i, which will be the length of the string
}

//copy 'from' into 'to'

void copy(char to[], char from[]){ //void means no value is to be returned
    int i;
    i = 0;

    while((to[i] = from[i])!= '\0'){
        ++i;
    }
}