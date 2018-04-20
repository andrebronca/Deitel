/* 
 * File:   main02.c
 * Author: andrerbronca
 *
 * Created on 9 de Abril de 2018, 23:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa de soma
 * Livro: Deitel
 */
main() {
    
    int inteiro1, inteiro2, soma;
    
    printf("Entre com o primeiro inteiro\n");
    scanf("%d", &inteiro1);
    
    printf("Entre com o segundo inteiro\n");
    scanf("%d", &inteiro2);
    
    soma = inteiro1 + inteiro2;
    
    printf("A soma é %d\n", soma);
    
    return 0;
}
