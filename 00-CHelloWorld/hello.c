#include <stdio.h>


int main() {

    // Punto a: salida a stdout
    printf("Hello, World!"); // Envia a stdout


    // Punto d: salida a output.txt
    FILE *fptr; //Crea puntero al archivo

    fptr = fopen("output.txt", "w"); // Crea el archivo "output.txt" en modo de escritura
    fprintf(fptr, "Hello, World!"); // Escribe dentro de output.txt
    fclose(fptr); // Cierra output.txt



    return 0;
}