//Vetor de 100... 100 primeiros números não multiplos por 7.

#include <stdio.h>

int main() {
    int v[100], i=0, x=1;
    while (i < 100) {
        if (x % 7 != 0) {
            v[i] = x;
            i++;
        }
        x++;
    }
for (i=0; i<100; i++){
    printf ("V[%i]: %d\n", i, v[i]);
}
    return 0;
}