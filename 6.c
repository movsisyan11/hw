#include <stdio.h>
#include <unistd.h>

int main(){
        int x = 10;
pid_t pid = fork();

if( pid < 0 ){

        printf("Fork error");

}

else if( pid == 0){
        x = 99;
        printf("Child pid = %d\n", getpid());
}

else{
        printf("Parent pid = %d\n", getpid());
        sleep(1);
        printf("x = %d\n", x);

}

}

