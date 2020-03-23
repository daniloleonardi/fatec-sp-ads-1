//
//  main.c
//  Atividade de do-while
//  Quadrado de cada numero da sequencia
//  Created by Danilo Leonardi on 22/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int n; double q;
    printf("Digite uma sequencia de numeros finalizada por 0: \n");
    do {scanf("%d", &n);
        q = pow(n,2);
        printf("%d ao quadrado e igual a %.0lf\n", n, q);
    } while(n != 0);
    
    printf("\n\n");
    return 0;
}
