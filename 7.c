#include <stdio.h>

int main() {
    int a = 7, b = 2;
    int *ptr1 = &a;
    int *ptr2 = &b;

    
    printf("Integer division: %d\n", *ptr1 / *ptr2);

    
    printf("Floating-point division: %f\n", (double)(*ptr1) / *ptr2);

    return 0;
}
