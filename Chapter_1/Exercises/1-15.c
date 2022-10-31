// F to C function

#include <stdio.h>

float Fahr_to_Cel(float);
float Cel_to_Fahr(float);

int main()
{
    int i;

    for (i = 0; i < 330; i += 30)
    {
        printf("%d F in Celsius is %.2f C\n", i, Fahr_to_Cel(i));
    }

    for (i = 0; i < 110; i += 10)
    {
        printf("%d C in Celsius is %.2f F\n", i, Cel_to_Fahr(i));
    }
    return 0;
}

// function being defined

float Fahr_to_Cel(float F)
{
    float C;
    C = (5.0 / 9.0) * (F - 32.0);
    return C;
}

float Cel_to_Fahr(float C)
{
    float F;
    F = ((9.0 / 5.0) * C) + 32.0;
    return F;
}