// pergunta 8: 
// variaveis locais -> 1 varivel local, 24 bytes

// funcao puts(const char *str) - If successful, non-negative value is returned. On error, the function returns EOF.
// pergunta 12 -> main+40 : argumento "Positivo!"
             //   main+62 : argumento "Negativo"

int main() {
    int a;
    scanf("%d", &a);
    if (a < 0) { // goto L55;
        // ou printf("Negativo\n")
        puts("Negativo");
    }

    puts("Positivo!");

    return 0;
}
