#include <stdio.h>
#include <string.h>

//exercicio beecrowd1257 Array Hash

int main() {

    int N, L, hash_total=0;
    int alf, pos, ele, tam;
    int i, j, k=0, m, n;
    char st[52];

    scanf("%d", &N);

    for(i=0;i<N;i++){
        scanf("%d", &L);

        hash_total=0;

        for(j=0;j<L;j++){
            scanf("%s", st);
            tam=strlen(st);
            //printf("tam %d\n", tam);


            for(m=0;m<tam;m++){
                    alf=st[m]-65;
                    //printf("alf %d\n", alf);
                    ele=j;
                    //printf("ele %d\n", ele);
                    pos=m;
                   // printf("pos %d\n", pos);
                    //hash[m]=((alf+ele)+pos);
                    //printf("hash %d\n", hash[m]);
                    hash_total+=((alf+ele)+pos);
            }
        }

        printf("%d\n", hash_total);
        //limpando vetores
        for(n=0;n<50;n++){
            st[n]='\0';
        }
    }

    return 0;
}
