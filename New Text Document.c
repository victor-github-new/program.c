// demontration of assignment operators
#include <stdio.h>
int main()
{
    int a = 8, c;

    c = a;      // c is 8
    printf("c = %d\n", c);
    c += a;     // c is 16
    printf("c = %d\n", c);
    c -= a;     // c is 8
    printf("c = %d\n", c);
    c *= a;     // c is 64
    printf("c = %d\n", c);
    c /= a;     // c is 8
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    return 0;
}
