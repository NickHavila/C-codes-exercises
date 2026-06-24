//Matriz 3x3... duas funções: linha de maior soma, posição da linha de maior soma.

#include <stdio.h>

int maiorlinha (int m[3][3]){
    int i, j, maiorsoma=0, maiorlinha=1, soma;
    for (j=0;j<3;j++){
            maiorsoma=maiorsoma+m[0][j];
        }
    for (i=1; i<3; i++){
        soma=0;
        for (j=0; j<3; j++){
            soma = soma + m[i][j];
        } if (soma > maiorsoma){
            maiorsoma=soma;
            maiorlinha=i+1;
        }
    }
    return maiorlinha;
}
int maiorsoma (int m[3][3]){
    int i, j, maiorsoma=0, soma;
    for (j=0;j<3;j++){
            maiorsoma=maiorsoma+m[0][j];
        }
    for (i=1; i<3; i++){
        soma=0;
        for (j=0; j<3; j++){
            soma = soma + m[i][j];
        } if (soma > maiorsoma){
            maiorsoma=soma;
        }
    }
    return maiorsoma;
}
int main() {
    int i, j, m[3][3], x;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("m[%d][%d]: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }
   
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("%d\t", m[i][j]);
        } printf ("\n");
    }
    printf ("Valor da maior soma: %d\n", maiorsoma(m));
    printf ("Posição da linha de maior soma: %d\n", maiorlinha(m));
    return 0;
}