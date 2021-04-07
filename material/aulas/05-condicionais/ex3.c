//    0x0000000000000000 <+0>:     cmp    %rsi,%rdi
//    0x0000000000000003 <+3>:     setg   %al
//    0x0000000000000006 <+6>:     test   %rsi,%rsi
//    0x0000000000000009 <+9>:     setg   %dl
//    0x000000000000000c <+12>:    and    %edx,%eax
//    0x000000000000000e <+14>:    movzbl %al,%eax
//    0x0000000000000011 <+17>:    retq   

int ex3(long rdi, long rsi){
    char a = rdi > rsi;
    char b = rsi > 0;
    return a && b;
}