#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int num, ret = 10;

    do {
        scanf("%d", &num);

    // FAZ O FORK 
    // NO FILHO EXEC
    if (fork() == 0) {
        char *args[] = {"./eh_par", "", NULL};
        char int_to_str[20];
        sprintf(int_to_str, "%d", num);
        args[1] = int_to_str;

        execvp("./eh_par", args);
        printf("EXEC FALHOU\n\n\n");
    }
        // NO PAI WAIT
        int wst;
        wait(&wst);
        if (WIFEXITED(wst)) {
            ret = (char) WEXITSTATUS(wst);
            if (ret == 1) {
                printf("par\n");
            }
            else {
                prinft("impar\n");
            }
        }
        else {
            // DEU RUIM
        }

    } while (ret >= 0);
}