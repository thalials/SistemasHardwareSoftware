//    0x0000000000000000 <+0>:     cmp    $0xa,%edi
//    0x0000000000000003 <+3>:     setg   %al
//    0x0000000000000006 <+6>:     movzbl %al,%eax
//    0x0000000000000009 <+9>:     retq 

int ex1(int edi) {
    return edi > 0;
}