int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int suma(int n) {
    if (n == 1) {
       return 1;
    }
    return n + suma(n - 1);
}