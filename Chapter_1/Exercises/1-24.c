// write a program that checks if input has syntax error

#include <stdio.h>
#define MAX 1000

void check_syntax(char line[], int len){
    int s_bracket, c_bracket, parentheses;
    int s_quote, d_quote, slash;
    int check;
    int t = 0;

    s_bracket = c_bracket = parentheses = 0;
    s_quote = d_quote = slash = 1;

    while(t < len){
        if (line[t] == '('){
            parentheses++;
        }
        if (line[t] == ')'){
            parentheses--;
        }
        if (line[t] == '{'){
            c_bracket++;
        }
        if (line[t] == '}'){
            c_bracket--;
        }
        if (line[t] == '['){
            s_bracket++;
        }
        if (line[t] == ']'){
            s_bracket--;
        }
        if (line[t] == '\"'){
            d_quote *= -1;
        }
        if (line[t] == '\''){
            s_quote *= -1;
        }
        t++;
    }

    check = !(c_bracket && s_bracket && parentheses) && (d_quote == 1 && s_quote == 1 && slash == 1);
    if (check){
        printf("No errors as of now!\n");
    }
    else{
        printf("Errors found! Please check again!\n");
    }
}

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

int main(){
    char line[MAX];
    int len;
    while ((len = getLine(line)) > 0){
        check_syntax(line, len);
    }
    return 0;
}