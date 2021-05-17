#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t filho;

    filho = fork();
    if (filho == 0) {
        int i = 1/0;
        printf("Divisão por zero!\n");
    }

    int wst;
    wait(&wst);
    printf("EXITED %d \n"
            "SIGNALED %d \n"
            "TERMSIG %d",
            WIFEXITED(wst),
            WIFSIGNALED(wst),
            WTERMSIG(wst));

    return 0;
}
