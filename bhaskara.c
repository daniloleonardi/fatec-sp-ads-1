//
//  main.c
//  Atividade 10
//
//  Created by Danilo Leonardi on 14/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Funcao que resolve equacoes de 2o grau com Bhaskara

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, delta;
    
    printf("\nDigite o valor de a:\t");
    scanf("%f", &a);
    
    if(a == 0) {
        printf("\nValor invalido.");
    }
    else {
        printf("\nDigite o valor de b:\t");
        scanf("%f", &b);
        printf("\nDigite o valor de c:\t");
        scanf("%f", &c);
        
        delta = pow(b,2) - 4 * a * c;
        if(delta < 0){
            printf("\nEquacao nao possui raizes reais");
        }
        else {
            x1 = (- b + sqrt(delta)) / (2 * a);
            x2 = (- b - sqrt(delta)) / (2 * a);
            
            printf("\nAs raizes da equacao sao %.2f e %.2f", x1, x2);
        }
    }
    printf("\n\n");
    return 0;
}

