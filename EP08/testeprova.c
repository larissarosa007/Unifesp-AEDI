//OBS. Só consegui fazer até aqui no período disponível em sala.

#include <stdio.h>

/*Becrowd 1200 perações em ABP I
Árvores binárias de busca*/

//fonte livro Algoritmos em C
struct cel {
    int chave;
    int conteudo;
    struct cel *esq;
    struct cel *dir;
};
typedef struct cel no;

//fonte livro Algoritmos em C
no *Busca (arvore, int k) {
    if (r == NULL || r->chave == k)
        return r;
    if (r->chave > k)
        return Busca (r->esq, k);
    else
        return Busca (r->dir, k);
}

//fonte livro Algoritmos em C
void Erd (arvore) {
    if (r != NULL) {
        Erd (r->esq);
        printf ("%d\n", r->conteudo);
        Erd (r->dir);
    }
}

//funcao red

//funcao edr


int main(){

    char n[50], n_search[50], command[8];
    int i=0;

    while (scanf("%s", &command) != EOF){
            if (command=='I'){
                scanf("%s", &n[i]);
                i++;
            }
            else if (command=='P'){
                scanf("%s", &n_search[i]);
                i++;

                //no *Busca (arvore, int k);

                /*if existe
                printf("%s existe", n_search);
                if nao existe
                printf("%s nao existe", n_search);*/
            }
            else if (command=='INFIXA'){
                void Erd (n);
            }
            else if (command=='PREFIXA'){
                void Red (n);
            }
            else if (command=='POSFIXA'){
                void Edr (n);
            }
    }

    return 0;
}
