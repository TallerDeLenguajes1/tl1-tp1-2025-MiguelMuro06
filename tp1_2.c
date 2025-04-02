#include <stdio.h>


int cuadrado(int numero) {
    return numero * numero;
}

void cuadradoVoid(int numero) {
    printf("El cuadrado es: %d\n", numero * numero);
}

void mostrarDireccionYContenido(int variable) {
    printf("Dirección: %p, Contenido: %d\n", &variable, variable);
}

void Invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        Invertir(a, b);
    }
}

int main() {
    int num = 5;
    printf(" Cuadrado de %d: %d\n", num, cuadrado(num));
    cuadradoVoid(num);

    printf("c) ");
    mostrarDireccionYContenido(num);

    int x = 10, y = 3;
    printf("Valores originales: x=%d, y=%d\n", x, y);

    Invertir(&x, &y);
    printf("Después de Invertir(): x=%d, y=%d\n", x, y);

    orden(&x, &y);
    printf("Después de orden(): x=%d, y=%d\n", x, y);

    int a, b;
    printf("\nIngrese dos números (separados por espacio): ");
    scanf("%d %d", &a, &b);

    orden(&a, &b);
    printf("Ordenados: %d, %d\n", a, b);
    printf("Cuadrado de %d: %d\n", a, cuadrado(a));
    mostrarDireccionYContenido(a);

    return 0;
}