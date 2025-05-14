
#include <stdio.h>

void torre(int mover){
    if (mover > 0)
    {
        printf("Direita\n");
        torre(mover - 1);
    }    
}
void bispo(int mover){
    if (mover > 0)
    {
        printf("Cima ,Direita\n");
        bispo(mover -1);
    }
}
void rainha(int mover){
    if(mover > 0)
    {
        printf("Esquerda\n");
        rainha(mover - 1);
    }
}

int main(){
    //Movimentação Torre//
    printf("Movimentação Torre\n");
    torre(5);

    printf("Movimentação Bispo\n");
    bispo(5);

    for (int i = 0; i <=5; i++){

        printf("Baixo,Esquerda\n");
    }
    printf("Movimentação Rainha\n");
    rainha(8);
    
    printf("Movimentação Cavalo\n");

    int cima,direita;
    for (cima = 0; cima <=2; cima++)
    {
    for (direita = 1; direita <= cima; direita++)
    {
        printf("Cima\n");
    }
    
    printf("Direita\n");
    
    }
    
    
    




    return 0;
}
