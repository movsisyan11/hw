#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	for (int i = 0; i < 3; i++) {
 		   pid_t pid = fork();

	if (pid < 0) {
            perror("fork error");
            exit(EXIT_FAILURE);
        }


	 else  if (pid == 0) {
       	    printf("Child %d, PID = %d\n", i, getpid());
            exit(0);
    }


	else{

	    int status;
            wait(&status);
            printf("Parent: Child %d finished\n", i);



}


}




}
