#include <stdio.h>

int main(void) {
    unsigned long long a = 1, b = 2, temp;
    int count;

    printf("%llu, %llu", a, b);
    for (count = 3; count <= 98; count++) {
        temp = a + b;
        printf(", %llu", temp);
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}
