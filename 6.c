#include <stdio.h>

void swap(int *num1, int *num2){
  int tpm = num1;
  *num1 = *num2; 
  *num2 = tmp;
}

void reverse(int *arr, int size){
  if(arr == NULL) return;
  for(i = 0; i < size / 2; ++i){
    swap(arr + i, arr + size - i - 1)
  }
  
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
   
    reverse(numbers, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
   

    return 0;
}
