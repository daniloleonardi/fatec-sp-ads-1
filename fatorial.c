//
//  main.c
//  Atividade16
//
//  Created by Danilo Leonardi on 24/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Funcao que entrega o fatorial de qualquer numero inteiro positivo

#include <stdio.h>

int main() {
    int n, i, fatorial = 1;
    
    do{printf("Digite um numero inteiro: ");
        scanf("%d", &n);
    } while(n < 0);
    for(i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("\nO fatorial de %d e igual a %d",n,fatorial);

    printf("\n\n");
    return 0;
}
