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
            char *args[] = {"./eh_par_estudo", "", NULL};
            char int_to_str[20];
            sprintf(int_to_str, "%d", num);
            args[1] = int_to_str;

            execvp("./eh_par_estudo", args);
            printf("EXEC FALHOU\n\n\n");
        }

        // NO PAI WAIT
        int wst;
        wait(&wst);
        // WIFEXITED(wst) retorna 1 se o proegrama acabou normalmente 
        if (WIFEXITED(wst)) {
            // WEXITSTATUS(wst) por padrao retorna 0 se o processo filho acabou
            ret = (char) WEXITSTATUS(wst);
            printf("%d\n", ret);
            if (ret == 1) {
                printf("par\n");
            }
            if (ret == 0) {
                printf("impar\n");
            }
            if (ret == -1) {
                printf("numero negativo. Para o loop\n");
            }
        }
        else {
            // DEU RUIM
        }

    } while (ret >= 0);
}