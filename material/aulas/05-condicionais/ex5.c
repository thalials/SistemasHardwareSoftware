//    0x0000000000000000 <+0>:     test   %rdi,%rdi
//    0x0000000000000003 <+3>:     setg   %dl
//    0x0000000000000006 <+6>:     test   %rsi,%rsi
//    0x0000000000000009 <+9>:     setle  %al
//    0x000000000000000c <+12>:    test   %al,%dl
//    0x000000000000000e <+14>:    jne    0x15 <ex5+21>
//    0x0000000000000010 <+16>:    lea    -0x2(%rsi),%rax
//    0x0000000000000014 <+20>:    retq
//    0x0000000000000015 <+21>:    lea    0x5(%rdi),%rax
//    0x0000000000000019 <+25>:    retq

// gotoC
long ex5(long rdi, long rsi) {
    char dl = rdi > 0;
    char al = rsi <= 0;
    long rax;

    if (dl & al <= 0) goto if1;
    rax = rsi - 2;
    return rax;

    if1:
    rax =  5 + rdi; 
    return rax;
}

// quais as expressoes booleanas testadas? and ... ?
// legivel em C
long ex5(long rdi, long rsi) {
    char dl = rdi > 0;
    char al = rsi <= 0;
    long rax;
    if (dl & al <= 0) {
        return rsi - 2;
    } else {
        return 5 + rdi;
    }
}
