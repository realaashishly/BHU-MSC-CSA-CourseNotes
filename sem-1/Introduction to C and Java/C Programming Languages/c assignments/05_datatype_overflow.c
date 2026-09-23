// 5. Demonstrate what happens when a value exceeds the range of an integer or floating-point data type.

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int x = INT_MAX;

    printf("INT_MAX        = %d\n", INT_MAX);
    printf("INT_MAX + 1    = %d\n", x + 1);

    float f = FLT_MAX;
    printf("FLT_MAX        = %e\n", FLT_MAX);
    printf("FLT_MAX * 2    = %e\n", f * 2.0f);

    return 0;
}
