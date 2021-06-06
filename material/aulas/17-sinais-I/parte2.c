#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t filho;

    filho = fork();
    printf("pid: %d\n", filho);
    if (filho == 0) {
        printf("[filho] pid = %d\n", getpid());
        // sleep(2);
        while(1);
    }
    else {
        int wst;
        wait(&wst);
        printf("pid do filho acabou\n");
        // WIFEXITED(wst) retorna 1 se o proegrama acabou normalmente 
        printf("WIFEXITED: %d\n"
                "WIFSIGNALED: %d\n"
                "WTERMSIG: %d\n", WIFEXITED(wst), WIFSIGNALED(wst), WTERMSIG(wst));
    }

    return 0;
}
