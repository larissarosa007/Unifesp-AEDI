#include <stdio.h>
#include <string.h>

//exercicio beecrowd1257 Array Hash

int main() {

    int N, L, hash_tmp[50];
    int alf, pos, ele, tam, hash[50];
    int i, j, k=0, m;
    char st[50];

    scanf("%d", &N);

    for(i=0;i<N;i++){
        for(j=0;j<L;j++){
            scanf("%s", &st);
            tam=strlen(st);

            for(m=0;m<tam;m++){
                    alf=st[m]-65;
                    ele=L;
                    pos=m;
                    hash[m]=((alf+ele)+pos);
                    hash_tmp[N]=hash_tmp[N]+hash[m];
            }
        }

    printf("%d", hash_tmp[N]);
    }

    return 0;
}
