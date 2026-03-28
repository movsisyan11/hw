#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	pid_t pid = fork();
	
	if(pid < 0){
		perror("Fork error: ");
	}
	else if(pid == 0){
		printf("Child process = %d\n", getpid());
		exit(0);

	}


	else{
		printf("Parent pid = %d\n", getpid());
		pid_t result = waitpid(pid, NULL, 0);
		if (result == pid) {
			    printf("Correct PID\n");

}
		else{
			perror("waitpid error: ");
			exit(1);

}
}

return 0;

}





