#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    printf("%p\n",arreglo);

    arreglo = (int*)calloc(num , sizeof(int)); //primero recibe el numero de elementos y luego el tamaño de uno de los elementos
    if(arreglo != NULL){
        printf("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont), (arreglo+cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);   
        arreglo= NULL;     
    }
    //callloc garantiza que a cada valor se le asigne un 0 (sin basura)
    return 0;
}