#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0x100

int main(){

    char nombre[N];
    char *buffer;
    int longitud;

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);

    longitud = strlen(nombre);

    printf("El nombre |%s| tiene |%d|\n", nombre, longitud);

    buffer = (char*) malloc(longitud+1);

    free(buffer);

    strncpy(buffer, nombre, sizeof(nombre));

    printf("\n");
    printf("%s\n", buffer);
    printf("El contenido copiado ha sido: %s\n", nombre);

    return EXIT_SUCCESS;
}
