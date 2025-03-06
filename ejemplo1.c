#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));
    if(arreglo != NULL){ //para verificar si malloc reservo memoria
        printf ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont, (arreglo+cont)));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);   
        arreglo = NULL; //Libera memoria     
        //la memoria se reserva de manera contigua
    }
    return 0;
}