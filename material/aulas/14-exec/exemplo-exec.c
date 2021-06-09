#include <unistd.h>
#include <stdio.h>

// a chamada exec é usada para carregar programas na memoria e executá-los. O novo
// programa é carregado no contexto do processo atual, substituindo-o por completo

int main(int argc, char *argv[]) {
    char prog[] = "ls";

    // a lista de argumentos sempre começa com o nome do
    // programa e termina com NULL

    // argc = 3
    // argv = { "ls", "-l", "-a" }
    char *args[] = {"ls", "-l", "-a", NULL}; 
    
    // os argumentos do execvp são passados para o main do programa executado
    execvp(prog, args);

    // a linha abaixo não é executada se o execvp funcionar. O programa antigo é 
    // completamente substituido pelo novo programa qnd o execvp() funciona;
    printf("Fim do exec!\n");

    return 0;
}
