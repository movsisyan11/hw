#include <stdio.h>

void adress(){
  int a, b;
  int *ptr1 = &a;
  int *ptr2 = &b;
  printf("Adress of ptr 1 = %p\n Adress of ptr2 = %p", &a, &b);
}

int main(){
  adress();
}
