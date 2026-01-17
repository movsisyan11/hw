#include <stdio.h>

void function(int *arr, int size){
  int *max_ptr = arr;  

for (int *ptr = arr + 1; ptr < arr + size; ptr++) {
    if (*ptr > *max_ptr) {
        max_ptr = ptr;  
        
    }
}
printf("Max number's address is %p\n", max_ptr);
printf("Max number's value is %d\n", *max_ptr);
}

int main(){
  int numbers[] = {5, 10, 3, 8};
  int n = 4;
  function(numbers, n);  
}
