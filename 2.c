#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
     printf("Current process PID = %d\n", getpid());
     printf("Current process parent  PID = %d\n", getppid());
    return 0;
}

