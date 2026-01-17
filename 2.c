#include <stdio.h>

void info(){
  int a = 43;
  int *ptr = &a;
  printf("a's value = %d\n a's adress = %p\n address stored in pointer = %p\n value pointed to by pointer = %d", a, &a, ptr, *ptr );
  
}

int main(){
  info();
}
