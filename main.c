//
//  main.c
//  Digitos invertidos
//
//  Created by Danilo Leonardi on 22/03/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//

#include <stdio.h>

int main() {
int n;
    do {printf ("\nDigite um numero (n >= 0): ");
        scanf ("%d", &n);
    }while (n < 0);
     printf ("\nInvertido: ");
    
    do{printf("%d", n%10);
        // n = n / 10
        n /= 10;
        } while (n != 0);

printf("\n\n");
return 0;
}
