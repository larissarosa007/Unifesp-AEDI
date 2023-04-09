#include <stdio.h>
#include <string.h>

/*Beecrowd 1871 Zero vale Zero
Soma dois numeros (que nao possuem zero) e se o resultado
possuir zero, o zero e retirado antes de imprimir a
resposta. O programa para quando receber M==N==0 (e nao
soma os zeros).*/

int main(){
    
    int M=0, N=0;
    int soma=0, tamst=0;
    int i=0;
    char st[11];

    do{
        
        scanf("%d\n%d", &M, &N);
        
        if(M!=0 || N!=0){
            
            soma=M+N;
            
            sprintf(st, "%d", soma);
            tamst=strlen(st);
            
            for(i=0;i<tamst;i++){
                
                if(st[i]!='0'){
                    printf("%c", st[i]);
                }
            }
            
            printf("\n");
        }
            
    }while(M!=0 || N!=0);
    
    return 0;
}