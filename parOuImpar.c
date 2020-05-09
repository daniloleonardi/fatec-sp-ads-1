//
//  main.c
//  Atividade 7
//
//  Created by Danilo Leonardi on 14/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Funcao para definir se o numero e par ou impar

#include <stdio.h>

int main() {
    int n;
    
    printf ("\nDigite um numero inteiro e positivo:\t");
    scanf("%d", &n);
    printf ("\nO numero %d e %s. \n", n, n % 2 == 0? "par":"impar");
    
    printf("\n\n");
    return 0;
}
