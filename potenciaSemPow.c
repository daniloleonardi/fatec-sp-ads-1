//
//  main.c
//  Atividade17
//
//  Created by Danilo Leonardi on 05/05/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Atividade 17 – Potencia (sem pow)

#include <stdio.h>

int main() {
    int potencia, i; float base, res = 1;

    do {printf("\nDigite um numero real para base: ");
        scanf("%f", &base);
        } while(base < 0);
    do {printf("\nDigite um numero inteiro para potencia: ");
        scanf("%d", &potencia);
        } while(potencia < 0);
    
    for (i = potencia; i > 0; i--) {
        res *= base;
    }
        
    printf("\nO valor %.2f elevado a %d e igual a %.2f", base, potencia, res);

    printf("\n\n");
    return 0;
}
