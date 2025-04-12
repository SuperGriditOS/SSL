#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    fprintf(file, "Hola Guido Bassi!");
    fclose(file);
    return 0;
}