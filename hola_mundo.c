// Autor: Antar Espadas

#include <stdio.h>

int suma(int n) {
    if (n == 1) {
       return 1;
    }
    return n + suma(n - 1);
}

int main() {
    printf("Hola mundo\n");
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n-1);
}
