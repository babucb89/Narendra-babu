#include <stdio.h>
int main()
{

    char arr[30]; // declare the size of character array
    int count = 0; // declare a count variable

    // enter any name to get the ascii codes
    printf (" \n Enter the name to get the ASCII codes: ");
    scanf (" %s", &arr);

    // use while loop to sequentially iterate every characters of the array
    while (arr[count] != '\0')
    {
        // display the character name one by one
        printf (" \n The ascii code of the character %c is %d ", arr[count], arr[count]);
        count++; // increment one by one
        }
        return 0;
}
