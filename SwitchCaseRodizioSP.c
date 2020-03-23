//
//  main.c
//  Atividade de switch case
//  Rodízio de SP
//  Created by Danilo Leonardi on 22/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//

#include <stdio.h>

int main() {
    int placa, n;
    printf("\nDescubra seu dia de rodizio. \n\nDigite o numero da placa: ");
    scanf("%d", &placa);
    n = placa % 10;
    switch(n){
    
        case 1:
        case 2: printf("Segunda-feira"); break;
        case 3:
        case 4: printf("Terca-feira"); break;
        case 5:
        case 6: printf("Quarta-feira"); break;
        case 7:
        case 8: printf("Quinta-feira"); break;
        default: printf("Sexta-feira"); break;
    }
        printf("\n\n");
    return 0;

    }
