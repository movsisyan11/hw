#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(){
    pid_t pid = fork();
    int status;
    

	if( pid < 0 ){

    perror("Fork error: ");
	exit(EXIT_FAILURE);

}

else if( pid == 0){
    sleep(3);
    printf("Child pid = %d\n", getpid());
	exit(EXIT_SUCCESS);
}

else{
    time_t start = time(NULL);
    wait(&status);
     time_t end = time(NULL);
    printf("Parent pid = %d\n", getpid());
    printf("Time = %ld", end - start);
	exit(EXIT_SUCCESS);
        

}
}
