#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000

//MergeSort

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void Intercala (int p, int q, int r, int v[]) {
    int i, j, k, *w;
    w = malloc ((r-p) * sizeof (int));
    i = p; j = q; k = 0;
    while (i < q && j < r) {
        if (v[i] <= v[j]) w[k++] = v[i++];
        else w[k++] = v[j++];
    }
    while (i < q) w[k++] = v[i++];
    while (j < r) w[k++] = v[j++];
    for (i = p; i < r; i++) v[i] = w[i-p];
    free (w);
}

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void Mergesort (int p, int r, int v[]) {
    if (p < r - 1) {
        int q = (p + r)/2;
        Mergesort (p, q, v);
        Mergesort (q, r, v);
        Intercala (p, q, r, v);
    }
}

int main(){

    int p=0, q, r;
    int v[N];
    int i, a=0;
    clock_t t_i, t_f;
    double duracao;

    t_i=clock();

    r=N;
    q=N/2;

    for(i=N-1; i>=0; i--){
        v[a]=i;
        a++;
    }

    /*printf("Antes:\n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    Mergesort(p, r, v);

    /*printf("\nDepois:\n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    t_f=clock();

    duracao=((double) (t_f - t_i) / CLOCKS_PER_SEC * 1000.0);
    printf("\nClock: %lf\n", duracao);

    return 0;
}
