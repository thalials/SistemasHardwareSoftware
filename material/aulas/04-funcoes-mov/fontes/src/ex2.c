//    0x0000000000000000 <+0>:     add    $0xa,%edi
//    0x0000000000000003 <+3>:     mov    %edi,(%rsi)
//    0x0000000000000005 <+5>:     retq   

void ex2(int a, int *b) {
    a = a + 10;
    
    *b = a+10;
}


// minha resposta
// como existe o retq, deve existir um return na funcao ?
int ex2 (int a, int *b){
    a = a + 10;
    *b = a;
    return *b; 
}