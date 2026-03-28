#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t pid = fork();
    int status;

	if( pid < 0 ){

    perror("Fork error: ");
	exit(EXIT_FAILURE);

}

else if( pid == 0){
        
    printf("Child pid = %d\n", getpid());
	exit(EXIT_SUCCESS);
}

else{
    wait(&status);
    
    if (WIFEXITED(status)) {
    int code = WEXITSTATUS(status);
    printf("Child exit code = %d\n", code);
}
    printf("Parent pid = %d\n", getpid());
	exit(42);
        

}
}
