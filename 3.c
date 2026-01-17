#include <stdio.h>


void function(int *ptr) {
    *ptr = *ptr + 10;
}

int main() {
    int a = 12;          
    printf("Before: %d\n", a);

    function(&a);        
    printf("After: %d\n", a);

    return 0;
}
