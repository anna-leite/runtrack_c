#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **array_clone(char **strs, int n){
    char **strs_cpy;

    // Allocation du tableau de pointeurs
    strs_cpy = (char **)malloc((n+1) * sizeof(char *));
    if (strs_cpy == NULL){
        printf("Erreur d'allocation\n");
        return NULL;
    }

    // Allocation de chaque chaine
    for (int i = 0; i < n; i++) {
        int letter = strlen(strs[i]) + 1;

        strs_cpy[i] = (char *)malloc(letter * sizeof(char));
        if (strs_cpy[i] == NULL) {
            printf("Erreur d'allocation de la chaine %d\n", i);

            for (int j = 0; j<i; j++){
                free(strs_cpy[j]);
            }
            free(strs_cpy);
            return NULL;
        }
        for (int j = 0; j<letter; j++) {
            strs_cpy[i][j] = strs[i][j];       
        }
    }

    strs_cpy[n] = NULL;

    return strs_cpy;
}

// 5️⃣ Fonction pour libérer la mémoire proprement
void free_array(char **array) {
    if (array == NULL) return;

    for (int i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
}

// 🔥 Test de la fonction
int main() {
    char *words[] = {"Hello", "World", "C", "Malloc", NULL};
    int n = 4;

    char **copy = array_clone(words, n);
    if (copy == NULL) {
        printf("Échec de la copie.\n");
        return 1;
    }

    // Affichage
    for (int i = 0; i < n; i++) {
        printf("%s\n", copy[i]);
    }

    // Libération de la mémoire
    free_array(copy);

    return 0;
}