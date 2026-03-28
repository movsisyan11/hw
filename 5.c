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
                printf("Child pid = %d\nParent pid = %d\n", getpid(), getppid());
                return 0;


}

else{

        printf("Child pid = %d\n",pid);
        return 0;

}



}

