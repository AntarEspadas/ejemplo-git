#include <stdio.h>

int suma(int n) {
    if (n == 0) return 0;
    return n + suma(n - 1);
}

int main() {
    printf("Hola mundo\n");
}