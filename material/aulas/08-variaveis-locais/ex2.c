void func1() {
    int var1 = 10;
    int var2 = 11;
    func2(&var1);
    var2 += 1;
    func2(&var2);
}