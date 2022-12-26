#include <stdio.h>
int main()
{
    // declare a variable
    int specialCh;

    for (specialCh = 33; specialCh < 48; specialCh++)
    {
        printf (" \n The ASCII value of '%c' special character is: %d", specialCh, specialCh);

    }


    for (specialCh = 58; specialCh < 65; specialCh++)
    {
        printf (" \n The ASCII value of '%c' special character is: %d", specialCh, specialCh);

    }

    for (specialCh = 123; specialCh < 127; specialCh++)
    {
        printf (" \n The ASCII value of '%c' special character is: %d", specialCh, specialCh);

    }
    return 0;
}
