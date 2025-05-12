
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Movimentação torre 5 casas//
        printf("Movimentação Torre\n");
    for ( int i = 0; i < 5; i++){
      
        printf("Direita\n"); // imprime direção


    }
     //movimentação bispo
    int i =0;
        printf("Movimentação Bispo\n");
    while (i < 5)
    {
        
        printf("Cima, direita\n");

    i++;
    }
    
    // Implementação de Movimentação da Rainha
   int a =0;
      printf("Movimentação rainha\n");
    do {
      
      printf("Esquerda\n"); 
    a++;
    }
    
    while (a <8);


    return 0;
    }
