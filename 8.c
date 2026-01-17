#include <stdio.h>

int main() {
    int num = 305419896;
    unsigned char *ptr = (unsigned char*)&num;

    printf("Bytes of num: ");
    for(int i = 0; i < sizeof(int); i++) {
        printf("%d ", ptr[i]);
    }
}
