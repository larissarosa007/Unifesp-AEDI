#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000

//QuickSort

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
int Separa (int p, int r, int v[]) {
    int c, j, k, t;
    c = v[r]; j = p;
    for (k = p; k < r; k++)
        if (v[k] <= c) {
            t = v[j], v[j] = v[k], v[k] = t;
            j++;
        }
    v[r] = v[j], v[j] = c;
    return j;
}

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void Quicksort (int p, int r, int v[]) {
    int j;
    if (p < r) {
        j = Separa (p, r, v);
        Quicksort (p, j - 1, v);
        Quicksort (j + 1, r, v);
    }
}

int main(){

    int p=0, q, r;
    int v[N];
    int i, a=0;
    clock_t t_i, t_f;
    double duracao;

    t_i=clock();

    r=N-1;
    q=N/2;

    /*for(i=N-1; i>=0; i--){
        v[a]=i;
        a++;
    }

    printf("Antes:\n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    Quicksort(p, r, v);

    /*printf("\nDepois:\n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    t_f=clock();

    duracao=((double) (t_f - t_i) / CLOCKS_PER_SEC * 1000.0);
    printf("\nClock: %lf\n", duracao);

    return 0;
}
