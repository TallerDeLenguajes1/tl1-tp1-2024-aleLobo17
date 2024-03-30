#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("hola mundo");
    int a=3;
    int *b = &a;
    printf("\n1) el contenido del puntero es: %d", *b);
    printf("\n2) la direccion de memoria almacenada por el puntero es: %d", b);
    printf("\n3) la direccion de memoria almacenada por la variable es: %d", &a);
    printf("\n4) la direccion de memoria del puntero es: %d", &b);
    printf("\n5) el tamaño de memoria utilizado por el puntero es: %d bits", sizeof(b));
    printf("\n");
    return 0;
}