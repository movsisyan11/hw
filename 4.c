#include <stdio.h>

int sum(int *arr, int size) {
    int total = 0;
    int *ptr = arr;        
    while (ptr < arr + size) {  
        total += *ptr;       
        ptr++;               
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = 5;
    int result = sum(numbers, n);
    printf("Sum = %d\n", result);
    return 0;
}
