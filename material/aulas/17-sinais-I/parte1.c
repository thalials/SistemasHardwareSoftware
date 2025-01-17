#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t filho;

    filho = fork();
    if (filho == 0) {
        int i = 1/0;
        printf("Divisão por zero!\n");
        sleep(2);
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
