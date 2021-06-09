
#include <pthread.h>
#include <stdio.h>

void *minha_thread(void *arg) {
    int *i = (int *) arg;
    printf("hello thread! %d\n", *i);
    return NULL;
}

int main() {
    pthread_t tid[4];

    // CRIA 4 THREADS
    for (int i=0; i < 4; i++) {
        pthread_create(&tid[i], NULL, minha_thread, &i);
    }
    printf("Hello main\n");
    // DA JOIN NAS THREADS
    for (int i=0; i < 4; i++) {
        pthread_join(tid[i], NULL);
    }

    return 0;
}