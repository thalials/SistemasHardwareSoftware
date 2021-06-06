#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

// wait
#include <sys/wait.h>

int main() {
    pid_t filho;

    filho = fork();

    if (filho == 0) {
        // processo filho
        printf("processo filho\n");
        sleep(2);
        return 3;

    } else {
        // processo pai 
        int wstatus;
    	wait(&wstatus);
    	printf("Filho acabou\n");
        // Macro retorna 1 se o proegrama acabou normalmente 
    	printf("Terminou normal: %d\n", WIFEXITED(wstatus));
    	printf("Valor de retorno: %d\n", WEXITSTATUS(wstatus));
    }
    return 0;
}