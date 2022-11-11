#include <stdio.h>

/*Count blanks, tabs, and new lines from input*/

int main(){
    int c, n, t, s;

    n = 0;
    t = 0;
    s = 0;

    while ((c = getchar())!= EOF)
        if (c == ' ')
        {
            ++s;
        }
        else if (c == '\t')
        {
            ++t;
        }
        else if (c == '\n')
        {
            ++n;
        }

    printf("Number of blanks are %d\n",s);
    printf("Number of tabs are %d\n",t);
    printf("Number of newlines are %d\n",n);
    return 0;
        
        
}
