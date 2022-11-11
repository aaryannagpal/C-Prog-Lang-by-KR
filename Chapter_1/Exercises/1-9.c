/*Copy input to output, replacing each string of one or more blanks by a single blank*/

#include <stdio.h>

int main(){
    int c;

	while((c = getchar()) != EOF){  //loop until EOF comes
		putchar(c); //will print the first blank
		if(c == ' ') //detects the blank
        {
			while((c = getchar()) == ' ') //runs until all blanks are over
				;
			putchar(c); //returns the first character after the blanks
		}
	}
}
