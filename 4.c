#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	pid_t pid = fork();
	if(pid < 0){
		printf("Fork error");
		return 1;
}

else if(pid == 0){
		printf("This is child pid\n");
		return 0;


}

else{

	printf("This is parent pid\n");
	return 0;

}



}
