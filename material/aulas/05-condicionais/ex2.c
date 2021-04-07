
//    0x0000000000000000 <+0>:     cmp    %rsi,%rdi
//    0x0000000000000003 <+3>:     setbe  %al
//    0x0000000000000006 <+6>:     movzbl %al,%eax
//    0x0000000000000009 <+9>:     retq  

// argumentos unsigned
int ex2(unsigned long rdi, unsigned long rsi) {
    // setbe -> below ( <= )
    return rdi <= rsi;
}