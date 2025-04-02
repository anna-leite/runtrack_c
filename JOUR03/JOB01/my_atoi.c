#include <stddef.h>

int my_atoi(char *str) {
    int num = 0;   
    int sign = 1;  // Par défaut, positif
    int started = 0;  // Vérifie si un nombre a commencé

    // Ignorer les espaces (ASCII 32) au début
    while (*str == 32) {
        str++;
    }

    while (*str) {
        int ascii_str = *str; 

        if (ascii_str == 45) {
            if (started) return 0; // Un '-' après un nombre est invalide
            sign = -1;
        }

        else if (ascii_str >= 48 && ascii_str <= 57) {
            int digit = ascii_str - 48; 
            num = num * 10 + digit;
            started = 1; 
        }
        // Arrêter si un espace est trouvé après un nombre
        else if (ascii_str == 32 && started) {
            break;
        }

        else {
            return 0;
        }
        str++;
    }

    return num * sign;
}


#include <stdio.h>

int main() {
    char str1[] = "   -123";  
    char str2[] = "42";      
    char str3[] = "  56";     
    char str4[] = "abc123";   
    char str5[] = "123abc";   
    char str6[] = "12-34";    
    char str7[] = "-12-34";   
    char str8[] = "  00123";  
    char str9[] = "  78 90"; 

    printf("%d\n", my_atoi(str1)); 
    printf("%d\n", my_atoi(str2));
    printf("%d\n", my_atoi(str3)); 
    printf("%d\n", my_atoi(str4)); 
    printf("%d\n", my_atoi(str5)); 
    printf("%d\n", my_atoi(str6)); 
    printf("%d\n", my_atoi(str7)); 
    printf("%d\n", my_atoi(str8)); 
    printf("%d\n", my_atoi(str9)); 

    return 0;
}






// #include <stddef.h>

// int my_atoi(char *str){
//     int num = 1;
//     int sign = 1; // Par défault positif


//     while (*str){
//         int ascii_str = *str; 
        
//         if (ascii_str == 45) {
//             if (sign == 1 && num == ){
//                 sign = -1;
//                 str++;
//             }
//             else {
//                 str++;
//             }
//         }
//         if (ascii_str > 47 && ascii_str < 58) {
//             int digit = *str - '0';
//             num = num * 10 + digit;
//             str++;
//         }
//         else {
//             str++;
//         }
//     }


//     if (num != NULL){
//         return num * sign;
//     }

//     return num;
// }

    // PSEUDO CODE :
    // Pour chaque charactères de l'attribut :
    //     si int str == 45:
    //         sign == 1 et num == NULL:
    //             sign = -1
    //             str++
    //         else pass
    //             str ++
    //     si int str est compris entre 48 et 57 :
    //         int chiffre = str - "0"
    //         *num = chiffre
    //         num++
    //         str++
    //     else 
    //         pass
    //         str++
        
    // if num != NULL :
    //     return num * sign
    
    // return num