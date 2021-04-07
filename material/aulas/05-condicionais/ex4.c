//    0x0000000000000000 <+0>:     test   %rdi,%rdi
//    0x0000000000000003 <+3>:     jle    0xf <fun4+15>
//    0x0000000000000005 <+5>:     mov    $0x2,%eax
//    0x000000000000000a <+10>:    imul   %rsi,%rax
//    0x000000000000000e <+14>:    retq
//    0x000000000000000f <+15>:    mov    $0x1,%eax
//    0x0000000000000014 <+20>:    jmp    0xa <fun4+10>

// tarefa 4
// gotoC => codigo C que use somente if-goto 
long fun4(long rdi, long rsi) {
    // poderia ser rdi & rdi <= 0 ?
    if (rdi <= 0 ) goto if1;
    int eax = 2;
    
    if1:
    eax = 1;

    return eax*rsi;
}

// pergunta 5 -> and 
// tarefa 5: transforme o codigo acima em C legível 
long fun4(long rdi, long rsi) {
    int eax;
    
    if (rdi <= 0) {
        eax = 2;
    } else {
        eax = 1;
    }

    return eax*rsi;
}