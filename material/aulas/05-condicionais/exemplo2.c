//    0x0000000000000000 <+0>:     endbr64 
//    0x0000000000000004 <+4>:     cmp    $0x4,%rdi
//    0x0000000000000008 <+8>:     setg   %dl
//    0x000000000000000b <+11>:    test   %rsi,%rsi
//    0x000000000000000e <+14>:    setle  %al
//    0x0000000000000011 <+17>:    test   %al,%dl
//    0x0000000000000013 <+19>:    je     0x1a <exemplo2+26>
//    0x0000000000000015 <+21>:    lea    (%rdi,%rsi,1),%rax
//    0x0000000000000019 <+25>:    retq   
//    0x000000000000001a <+26>:    mov    %rdi,%rax
//    0x000000000000001d <+29>:    sub    %rsi,%rax
//    0x0000000000000020 <+32>:    retq  
int exemplo2(long a, long b) {
    long c;
    if (a >= 5 && b <= 0) {
        c = a + b;
    } else {
        c = a - b;
    }
    return c;
}