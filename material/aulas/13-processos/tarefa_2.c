#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
    pid_t lista_pid[8];

    for (int i = 0; i < 8; i++) {
        lista_pid[i] = fork();

        // analise do processo filho (ps: o processo pai continua rodando)
        if (lista_pid[i] == 0) {
            printf("[filho] meu pid é %d, meu id é %d, pid do pai = %d\n", getpid(), i+1, getppid());
            // da um fim na vida do processo filho aqui
            return 0;
        }
        int wstatus;
    	wait(&wstatus);
    }
    printf("[pai]  meu pid é %d e meu id é %d\n", getpid(), 0);
    return 0;
}
