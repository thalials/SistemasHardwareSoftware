int soma (long rdi, int esi) {
    int edx = 0;
    int eax = 0;
    while(edx < esi) {
        long rcx = edx;
        eax += rdi + 4*rcx;
        edx++;
    }   
    return eax;
}

// %rdi -> armazena o &vec[0]
// %rcx -> contem o indice do elemento a ser acessado
int soma(int vec[], int esi){
    
}