//Matriz 3X3... funções soma diagonal principal, maior abaixo, menor acima (da DP(Diagonal principal))
#include <stdio.h>

int soma (int m[3][3]){
    int i, j, S=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i==j){
                S=m[i][j]+S;
            }
        } 
    } return S;
}
int maiorabaixo (int m[3][3]){
    int i, j, maior;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i>j){
            if (i==1 && j==0){
                maior=m[i][j];
            } else if (m[i][j]>maior){
                maior = m[i][j];
            }
          }
        }
    } return maior;
}
int menoracima (int m[3][3]){
    int i, j, menor;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i<j){
            if (i==0 && j==1){
                menor=m[i][j];
            } else if (m[i][j]<menor){
                menor = m[i][j];
            }
          }
        }
    } return menor;
}
int main() {
    int m[3][3], i, j;
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf ("m[%d][%d]: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf ("%d\t", m[i][j]);
        }printf ("\n");
    }
    printf ("Soma da matriz: %d\n", soma (m));
    printf ("maior numero abaixo da DP: %d\n", maiorabaixo(m));
    printf ("menor numero acima da DP: %d\n", menoracima(m));

    return 0;
}