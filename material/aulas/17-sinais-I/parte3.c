#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()  {
    if (fork() == 0) {
        printf("pid=%d\n", getpid());
        printf("esperando 10s\n");
        sleep(10);
        char prog[] = "kill";

        char *args[] = {"kill", "SIGKILL", ("%d",getpid()), NULL}; 
    
        // os argumentos do execvp são passados para o main do programa executado
        execvp(prog, args);

    } else {
        int wst;
        wait(&wst);
        printf("processo filho acabou. SIGKILL ENVIADO!\n");
    }
}