#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

struct soma_parcial_args {
    double *vetor;
    int start, end;
    // se a gnt quer que todo mundo use o mesmo, tem que usar um apontador
    pthread_mutex_t *mutex_soma;
};

double soma = 0;
void *soma_parcial(void *_arg) {
    struct soma_parcial_args *spa = _arg;

    double local_soma = 0;
    for (int i = spa->start; i < spa->end; i++) {
        local_soma += spa->vetor[i];      // regiao critica!
    }

    // Essa forma é a melhor
    // as threads rodam ao mesmo tempo e só atualiza a soma de forma travada 
    pthread_mutex_lock(spa->mutex_soma);
    soma += local_soma;
    pthread_mutex_unlock(spa->mutex_soma);


    return NULL;
}

int main(int argc, char *argv[]) {
    double *vetor = NULL;
    int n;
    scanf("%d", &n);

    vetor = malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vetor[i]);
    }

    /* TODO: criar thread_t e soma_parcial_args aqui */
    pthread_t *tids = malloc(sizeof(pthread_t)* 4);
    struct soma_parcial_args *args = malloc(sizeof(struct soma_parcial_args) * 4);
    pthread_mutex_t mutex_soma = PTHREAD_MUTEX_INITIALIZER;

    for (int i = 0; i < 4; i++) {
        /* TODO: preencher args e lançar thread */
        //preencher o args
        args[i].vetor = vetor;
        args[i].start = i * n / 4 ;
        args[i].end = (i + 1) * n / 4;
        args[i].mutex_soma = &mutex_soma;
        if (i == 3) { args[i].end = n; }

        //lancçar threar
        pthread_create(&tids[i], NULL, soma_parcial, &args[i]);
    }

    /* TODO: esperar pela conclusão*/
    for (int i=0; i<4; i++) {
        pthread_join(tids[i], NULL);
    }
    free(tids);
    free(args);

    printf("Paralela: %lf\n", soma);

    soma = 0;
    struct soma_parcial_args aa;
    aa.vetor = vetor;
    aa.start = 0;
    aa.end = n;
    aa.mutex_soma = &mutex_soma;
    soma_parcial(&aa);
    printf("Sequencial: %lf\n", soma);

    return 0;
}
