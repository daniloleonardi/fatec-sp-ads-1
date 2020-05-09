//
//  main.c
//  Digitos invertidos
//
//  Created by Danilo Leonardi on 22/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Imprime o numero do input com os digitos invertidos

#include <stdio.h>

int main() {
    int n;
    
    do {printf ("\nDigite um numero inteiro e positivo: ");
        scanf ("%d", &n);
    } while (n < 0);

    printf ("\nInvertido: ");

    do {printf("%d", n%10);
        n /= 10;
        } while (n != 0);

    printf("\n\n");
    return 0;
}
