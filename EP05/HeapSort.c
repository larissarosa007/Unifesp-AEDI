#include <stdio.h>
#include <time.h>
#define N 20001

//HeapSort

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void InsereEmHeap (int m, int v[]) {
    int f = m+1;
    while (f > 1 && v[f/2] < v[f]) {
        int t = v[f/2]; v[f/2] = v[f]; v[f] = t;
        f = f/2;
    }
}

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void SacodeHeap (int m, int v[]) {
    int t, f = 2;
    while (f <= m) {
        if (f < m && v[f] < v[f+1]) ++f;
        if (v[f/2] >= v[f]) break;
        t = v[f/2]; v[f/2] = v[f]; v[f] = t;
        f *= 2;
    }
}

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void Heapsort (int n, int v[]) {
    int m;
    for (m = 1; m < n; m++)
        InsereEmHeap (m, v);
    for (m = n; m > 1; m--) {
        int t = v[1]; v[1] = v[m]; v[m] = t;
        SacodeHeap (m-1, v);
    }
}

int main(){

    int m, n;
    int v[N];
    int i, a=1;
    clock_t t_i, t_f;
    double duracao;

    t_i=clock();

    m=N;
    n=N;

    /*for(i=N-2; i>=1; i--){
        v[a]=i;
        a++;
    }

    printf("Antes:\n");
    for(i=1; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    Heapsort(n-1, v);

    /*printf("\nDepois:\n");
    for(i=1; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    t_f=clock();

    duracao=((double) (t_f - t_i) / CLOCKS_PER_SEC * 1000.0);
    printf("\nClock: %lf\n", duracao);

    return 0;
}
