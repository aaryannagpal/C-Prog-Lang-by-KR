/*Count the occurences of each digit*/

#include <stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10]; //initializing an array

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0; //giving all elements the value of 0
    printf("Input: ");
    while ((c = getchar())!=EOF)
        if (c >= '0' && c<='9') //checking if character in c is digit or nto{
        {
            ++ndigit[c-'0']; //to obtain the numeric value of the digit
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else{
            ++nother;
        }

    for (i = 0; i <10; ++i){
        printf("Frequency of %d is %d\n", i, ndigit[i]);
    }
    printf("Number of white spaces: %d and other characters: %d", nwhite, nother);
    return 0;
    }