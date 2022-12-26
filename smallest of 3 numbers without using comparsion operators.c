#include <stdio.h>

int smallest(int x, int y, int z)
{
    int c = 0;
    while (x && y && z) {
        x--;
        y--;
        z--;
        c++;
    }
    return c;
}

int main()
{
    int x = 15, y = 14, z = 13;
    printf("Minimum of 3 numbers is %d", smallest(x, y, z));
    return 0;
}
