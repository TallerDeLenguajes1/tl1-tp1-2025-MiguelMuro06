#include <stdio.h>

int main (){
    int x= 4;
    int *punt;
    punt = &x;

    printf("\n Hola mundo");

    printf("\n el contenido del puntero: %d", *punt);
    
    printf("\n La dirección de memoria almacenada por el puntero: %p", punt);

    printf("\n La dirección de memoria de la variable: %p", &(*punt));

    printf("\n La dirección de memoria del puntero: %p", &punt);

    printf("\n el tamaño de memoria utilizado por esa variable usando la función sizeof(): %zu bytes\n", sizeof(*punt));

    
    
    return 0;
}