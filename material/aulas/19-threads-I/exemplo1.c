
#include <pthread.h>
#include <stdio.h>

void *minha_thread(void *arg) {
    printf("Hello thread!\n");
    return NULL;
}


int main() {
    pthread_t tid;
    
    int error = pthread_create(&tid,    // variável para guardar ID da nova thread
                                NULL,   // opções de criação. NULL = opções padrão
                                minha_thread,   // função a ser executada
                                NULL);  // parâmetro passado para a função acima

    printf("Hello main\n");
    
   pthread_join(tid, NULL); // espera tid acabar.
    
    return 0;
}
