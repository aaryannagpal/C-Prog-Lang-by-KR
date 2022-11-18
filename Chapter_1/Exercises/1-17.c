/*Print input lines larger than 80 characters*/
#include <stdio.h>
#define MAX 1000 //maximum length of a line
#define LIMIT 80 

int getline(char a[], int lim);

int main(){
    char line[MAX];
    int len;
    
    while ((len = getline(line, MAX))>0){
        if (len > LIMIT){
            printf("%s", line);
        }
    }
    
    return 0;
}

int getline(char s[], int lim){
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar())!= EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;