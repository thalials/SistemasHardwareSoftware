#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()  {
    pid_t filho;
    if (fork() == 0) {
        filho = getpid();
        printf("pid=%d\n", filho);
        printf("esperando 10s\n");
        sleep(10);
        // char prog[] = "kill";

        // char *args[] = {"kill", "SIGKILL", ("%d",getpid()), NULL}; 
    
        // os argumentos do execvp são passados para o main do programa executado
        //execvp(prog, args);
        kill(filho, SIGKILL);

    } else {
        int wst;
        wait(&wst);
        printf("processo filho acabou. SIGKILL ENVIADO!\n");
        printf("WIFEXITED: %d\n"
                "WIFSIGNALED: %d\n"
                "WTERMSIG: %d\n", WIFEXITED(wst), WIFSIGNALED(wst), WTERMSIG(wst));
    
    }
}