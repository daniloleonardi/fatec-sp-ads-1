//
//  main.c
//  Switch Case
//
//  Created by Danilo Leonardi on 22/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Calculadora usando case switch

#include <stdio.h>

int main() {
    float x, y; char op;

    printf ("\nDigite a expressao: ");
    scanf ("%f %c %f", &x, &op, &y);
    switch ( op ) {
        case '+': printf ("\n valor = %.2f", x+y); break;
        case '-': printf ("\n valor = %.2f", x-y); break;
        case '*': printf ("\n valor = %.2f", x*y); break;
        case '/': if (y==0) {
            printf("\n Impossivel dividir por zero!");
            } else
            printf("\nvalor = %.2f", x/y); break;
        default : printf ("\n Operador inválido: %c",op);
    }

    printf("\n\n");
    return 0;

}
