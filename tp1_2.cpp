#include <stdio.h>

//a
int cuadradoNumero(int *x){
    return *x * *x;
}

//b
void cuadrado(int *x){
    printf("\n%d", *x * *x);
}

//c
void mostrarValorYcontenido(int *x){
    printf("\nel valor es: %d", *x);
    printf("\nla direccion de memoria es: %d", &x);
}

//d
void invertir(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    printf("\na invertido es: %d", *a);
    printf("\nb invertido es: %d", *b);
}

//e
void ordenar(int *a, int *b){
    if (*a<*b)
    {
        printf("\na: %d", *a);
        printf("\nb: %d", *b);
    } else
    {
        int aux;
        aux=*a;
        *a=*b;
        *b=aux;
        printf("\na: %d", *a);
        printf("\nb: %d", *b);
    }
}

void leerEimprimir(int *a, int *b){
    //int aux1=1, aux2=1;
    *a = cuadradoNumero(a);
    *b = cuadradoNumero(b);
    for (int i = 1; i < *a; i++)
    {
        if (i*i==*a)
        {
            printf("\nel valor de a: %d", i);
            break;
        }
    }
    for (int j = 1; j < *b; j++)
    {
        if (j*j==*b)
        {
            printf("\nel valor de b: %d", j);
            break;
        }   
    }
    
}

int main(){
    int a, b, c;
    printf("\ningrese el primer numero");
    scanf("%d", &a);
    printf("\ningrese el segundo numero");
    scanf("%d", &b);
    int *puntA = &a;
    int *puntB = &b;


    c = cuadradoNumero(puntA);
    printf("\n%d", c);
    cuadrado(puntA);
    mostrarValorYcontenido(puntA);
    invertir(puntA,puntB);
    ordenar(puntA,puntB);
    leerEimprimir(puntA,puntB);
    printf("\n");


}

