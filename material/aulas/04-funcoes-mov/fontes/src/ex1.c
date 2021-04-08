//    0x0000000000000000 <+0>:     mov    %edi,%eax
//    0x0000000000000002 <+2>:     sub    %esi,%eax
//    0x0000000000000004 <+4>:     retq

int ex1(int a, int b) {
    return a - b;
}

// minha resposta
// %edi, %eax, %esi  
//  a   ,  b  ,   c
int ex1(int b, int c) {
    int a;
    b = a;
    b = b - c;
    return b;
}
