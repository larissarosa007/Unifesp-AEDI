#include <stdio.h>
#include <string.h>

/*Beecrowd 1253 Cifra de Cesar
Recebe a quantidade de casos teste, em cada caso teste
recebe uma sequencia de caracteres maisculos e a chave de
descriptografia (quantas posicoes as letras foram deslocadas).
Usa a Cifra de Cesar modificada e imprime os caracteres
descriptografados.*/
 
int main(){
    
    int N=0;
    char st1[50];
    int desloc=0;
    int j=0, tamst1=0, i=0, k=0, aux=0, aux2=0;
    
    scanf("%d", &N);
    
    for(j=0;j<N;j++){
        scanf("%s", st1);
        scanf("%d", &desloc);
        
        tamst1=strlen(st1);
        
        for(i=0;i<tamst1;i++){
            //ASCII A==65 Z==90
            
            st1[i]=st1[i]-desloc;
            
            if( st1[i]<65){
                aux=65-st1[i];
                aux2=91-aux;
                st1[i]=aux2;
            }
        }
        
        printf("%s\n", st1);
        
        for(k=0;k<tamst1;k++){
            //limpa a string
            st1[k]='\0';
        }
    }

    return 0;
}