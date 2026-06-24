//matriz 5x5... procure um valor X (determinado pelo usuario)

#include <stdio.h>

int main() {
    int i, j, m[5][5], x;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf ("m[%d][%d]: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }
    printf ("Qual valor você deseja procurar? \n");
    scanf ("%d", &x);
    
    int valor=0, posx, posy;
    
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (x==m[i][j]){
                valor = m[i][j];
                posx = i;
                posy = j;
            } 
        }
    }
   
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf ("%d\t", m[i][j]);
        } printf ("\n");
    }
    if (valor == 0){
        printf ("valor x não encontrado. \n");
    } else {
        printf ("posição do valor encontrado: m[%d][%d]", posx, posy);
    }

    return 0;
}