/*
Declare um array de 5 caracteres e inicialize-o com as
letras: ’a’, ’b’, ’c’, ’d’ e ’e’. Imprima os elementos do array.
*/

#include <stdio.h>
int main(){
    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("Elementos do array:\n");
    for(int i=0; i<5; i++){
        printf("%c\n", array[i]);
    }
    return 0;
}
