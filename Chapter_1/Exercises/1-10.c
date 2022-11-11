/*Copy input, give output where tabs, blanks and slashes are replaced by escape characters*/

#include <stdio.h>

int main(){
    int c, nl;

    while ((c = getchar())!= EOF){
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
            continue;
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
            continue;
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c != '\t' && c != '\b' && c != '\\')
        {
            putchar(c);
            continue;
        }
        
        
    return 0;
        

    }
}