//# C-codes-exercises
//Exercises about C programming. PUC-PR
//Matriz de x linhas e y colunas... função media, soma, maior e menor.
#include <stdio.h>

int soma (int x, int y, int m[x][y]){
    int i, j, S=0;
    for (i=0; i<x; i++){
        for (j=0; j<y; j++){
            S=m[i][j]+S;
        } 
    } return S;
}
float media (int x, int y, int m[x][y]){
    return (float)soma(x, y, m)/(x*y);
}
int maior (int x, int y, int m[x][y]){
    int i, j, maior;
    for (i=0; i<x; i++){
        for (j=0; j<y; j++){
            if (i==0 && j==0){
                maior=m[i][j];
            } else if (m[i][j]>maior){
                maior = m[i][j];
            }
        }
    } return maior;
}
int menor (int x, int y, int m[x][y]){
    int i, j, menor;
    for (i=0; i<x; i++){
        for (j=0; j<y; j++){
            if (i==0 && j==0){
                menor=m[i][j];
            } else if (m[i][j]<menor){
                menor = m[i][j];
            }
        }
    } return menor;
}
int main() {
    int i, j, x, y;
        do{
            printf ("Quantas linhas (x) na matriz?: ");
            scanf ("%d", &x);
        }while (x<=0);
        
        do{
            printf ("Quantas colunas (y) na matriz?: ");
            scanf ("%d", &y);
        }while (y<=0);

        int m[x][y];

    for (i=0; i<x; i++){
        for (j=0; j<y; j++){
            printf ("m[%d][%d]: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }
    for (i=0; i<x; i++){
        for (j=0; j<y; j++){
            printf ("%d\t", m[i][j]);
        }printf ("\n");
    }
    printf ("Soma da matriz: %d\n", soma (x, y, m));
    printf ("Media da matriz: %.1f\n", media (x, y, m));
    printf ("maior numero da matriz: %d\n", maior (x, y, m));
    printf ("menor numero da matriz: %d\n", menor(x, y, m));
    
    return 0;
}