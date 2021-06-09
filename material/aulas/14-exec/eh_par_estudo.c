#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // se par -> retorna 1
    // caso contrario -> retorna 0
    // se negativo -> retorna -1
    int num1 = atoi(argv[1]);
    if(num1 < 0) {
        printf("é negativo\n");
        return -1;
    }
    if (num1%2 == 0) {
        printf("é par\n");
        return 1;
    }
    printf("não é par nem negativo\n");
    return 0;

}