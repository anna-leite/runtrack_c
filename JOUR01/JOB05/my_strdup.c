#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de la fonction my_strdup
char *my_strdup(const char *src);

// main doit connaitre l'existence de my_strdup avant son appel.
int main() {
    const char *original = "Hello, World!";
    char *duplicate = my_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        free(duplicate);
    } else {
        printf("Failed to allocate memory.\n");
    }

    return 0;
}

// Définition de la fonction my_strdup
char *my_strdup(const char *src) {
    if (src == NULL) {
        return NULL;
    }

    // Allouer la mémoire nécessaire pour la copie de la chaîne
    char *duplicate = (char *)malloc(strlen(src) + 1); // +1 pour le '\0'

    if (duplicate == NULL) {
        return NULL;
    }

    // Utiliser strcpy pour copier la chaîne source dans la nouvelle mémoire allouée
    strcpy(duplicate, src);

    return duplicate;
}


