#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *string = "51.2% are admitted"; // initialize string

    double d;                                  // variable to hold converted sequence

    char *stringPtr;                           // create char pointer

    d = strtod(string, &stringPtr);

    if(d != 0) {
        printf("The string \"%s\" is converted to double %f\n", string, d);
    } else {
        printf("The string \"%s\" is not converted\n", string);
    }
}