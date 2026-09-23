// 6. Use const, signed, and unsigned variables and demonstrate their effect on storage and range.
#include <stdio.h>
#include <limits.h>

int main(void)
{
    const int DAYS = 7;
    signed int s = -10;
    unsigned int u = 10;

    printf("\n\n");
    printf("const DAYS = %d\n", DAYS);
    printf("signed int  : value = %d, range = %d to %d\n",
           s, INT_MIN, INT_MAX);
    printf("unsigned int: value = %u, range = 0 to %u\n",
           u, UINT_MAX);

    printf("sizeof(signed int)   = %zu byte(s)\n", sizeof(s));
    printf("sizeof(unsigned int) = %zu byte(s)\n", sizeof(u));
    printf("\n\n");

    return 0;
}
