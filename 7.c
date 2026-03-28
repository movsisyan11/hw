
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
        
	pid_t pid = fork();

	if( pid < 0 ){

        perror("Fork error: ");
	exit(EXIT_FAILURE);

}

else if( pid == 0){
        
        printf("Child pid = %d\n", getpid());
	exit(EXIT_SUCCESS);
}

else{
        printf("Parent pid = %d\n", getpid());
	exit(EXIT_SUCCESS);
        

}

}


