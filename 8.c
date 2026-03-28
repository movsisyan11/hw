#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	pid_t pid = fork();
        int status;
	wait(&status);
	printf("child is over\n");		

}

