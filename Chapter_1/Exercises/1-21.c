/*replaces spaces with tab in the input*/

#include <stdio.h>

#define SPACE 8
#define MAX 1000

int getLine(char line[]){
    int c, i;
    for(i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void detab(char line[], int len){
    char newLine[MAX];
    int i = 0, j = 0;

    for (i, j; i < len; ++i){
        if (line[i] == ' ' && line[i + 1] == ' ' && line[i + 2] == ' ' && line[i + 3] == ' ' 
        && line[i + 4] == ' ' && line[i + 5] == ' ' && line[i + 6] == ' ' && line[i + 7] == ' '){
        //8 spaces must be in continuity for them to be replaced by a tab

            newLine[j] = ' ';
            i+=7;
            ++j;
            }

        else{
            newLine[j] = line[i];
            ++j;
        }
    newLine[j] = '\0';
    }
    printf("%s", newLine);
}
int main(){
    int len;
    char line[MAX];

    while((len = getLine(line)) > 0){
        detab(line, len);
    }
    return 0;
}

//output comes on debugger but not on normal compiler