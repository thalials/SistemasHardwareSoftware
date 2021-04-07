//    0x0000000000000000 <+0>:     cmp    %rsi,%rdi
//    0x0000000000000003 <+3>:     jle    0x8 <ex6+8>
//    0x0000000000000005 <+5>:     mov    %rdi,%rsi
//    0x0000000000000008 <+8>:     test   %rdi,%rdi
//    0x000000000000000b <+11>:    jle    0x10 <ex6+16>
//    0x000000000000000d <+13>:    neg    %rsi
//    0x0000000000000010 <+16>:    mov    %esi,%eax
//    0x0000000000000012 <+18>:    retq   

// gotoC
long ex6(long rdi, long rsi) {
    // cmp rdi - rsi 
    // jle <= 0
    if (rdi <= rsi) goto if1;
    rsi = rdi;

    if1:
    if(rdi <= 0 ) goto if2;
    rsi = !rsi;

    if2:
    return rsi;
}

// funcao legivel em C
long ex6(long rdi, long rsi) {
    if (rdi <= rsi) {
        rsi = rdi;
    }

    if (rdi <=0 ) {
        rsi = !rsi;
    }

    return rsi;

}

