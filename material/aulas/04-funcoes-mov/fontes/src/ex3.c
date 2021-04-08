//    0x0000000000000000 <+0>:     mov    (%rsi),%eax
//    0x0000000000000002 <+2>:     imul   %eax,%eax
//    0x0000000000000005 <+5>:     mov    %eax,(%rdi)
//    0x0000000000000007 <+7>:     retq   
void ex3(int *a, int *b) {
    *a = (*b) * (*b);
}














// ????????????
// %eax , %rsi , %rdi
//   a  ,   b  ,  c

// int ex3(int a, int *b) {
//     a = *b;
//     a = a * (*b);
//     return a * (*b);
// }