#include <stdio.h>
#include <time.h>
#define N 20000

//InsertionSort

/*Função do livro Algoritmos em linguagem C de Paulo Feofiloff*/
void Insercao (int n, int v[]) {
    int i, j, x;
    for (j = 1; j < n; j++) {
        x = v[j];
        for (i = j-1; i >= 0 && v[i] > x; i--)
            v[i+1] = v[i];
        v[i+1] = x;
        }
    }

int main(){

    int n;
    int v[N];
    int i, a=0;
    clock_t t_i, t_f;
    double duracao;

    t_i=clock();

    n=N;

    for(i=N-1; i>=0; i--){
        v[a]=i;
        a++;
    }

    /*printf("Antes:\n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    Insercao(n, v);

    /*printf("\nDepois:\n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }*/

    t_f=clock();

    duracao=((double) (t_f - t_i) / CLOCKS_PER_SEC * 1000.0);
    printf("\nClock: %lf\n", duracao);

    return 0;
}
