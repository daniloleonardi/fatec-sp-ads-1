//
//  main.c
//  Atividade18
//
//  Created by Danilo Leonardi on 06/05/20.
//  Copyright © 2020 Danilo Leonardi. All rights reserved.
//  Atividade 18 – Data valida

#include <stdio.h>

// funcao para definir ano bissexto
int bissexto(int aa) {
   if((aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)))
      return 1;
   else
      return 0;
}

// funcao para validar a data
int valida(int dd, int mm, int aa) {
    // verifica ano
    if(aa < 1900 || aa > 9999)
       return 0;
    // verifica mes
    if(mm < 1 || mm > 12)
       return 0;
    // verifica dia
    if(dd < 1 || dd > 31)
       return 0;
    // bate dia, mes e ano
    if(mm == 2) {
        if(bissexto(aa)) {
           if(dd <= 29)
              return 1;
        }
        else if(!bissexto(aa)) {
           if(dd <= 28)
              return 1;
        }
        else {
             return 0;
        }
     }
    // meses com 30 dias
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        if(dd <= 30) {
             return 1;
        }
        else {
             return 0;
        }
    }
    return 1;
}

// funcao principal
int main() {
    int dd, mm, aa;
    
    do{printf("Digite dia, mes e ano no formato dd mm aaaa:\n");
        scanf("%d %d %d", &dd, &mm, &aa);
    } while (!valida(dd, mm, aa));
    
    printf("Data valida. Parabens!");
    
    printf("\n\n");
    return 0;
}
