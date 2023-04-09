#include <stdio.h>
#include <string.h>

/*Beecrowd 2242 Huaauhahhuahau
Le uma string de letras minusculas de no max 50 char.
Ignora as consoantes e verifica se as vogais lidas da
direita para a esquerda são iguais se lidas da esquerda
para a direita. Retorna S ou N.*/

int main(){
    char st1[51], st2[51], st3[51];
    int tamst1=0, tamst2=0, comparacao=0;
    int i=0, m=0, j=0, k=0;
    
    scanf("%s", st1);
    tamst1=strlen(st1);
    
    //colocando apenas as vogais na st2
    for(i=0;i<tamst1;i++){
        if(st1[i]==('a') || st1[i]==('e')|| st1[i]==('i') || st1[i]==('o') || st1[i]==('u')){
            st2[m]=st1[i];
            m++;
        }
    }
    st2[m]='\0';
  
    //coloca st2 invertida na st3
    tamst2=strlen(st2);
    
    for(j=0;j<tamst2;j++){
        k=(tamst2-1)-j;
        st3[j]=st2[k];
    }
    st3[j]='\0';
    
    //comparando a st2 e a st3
    comparacao=strcmp(st2,st3);
    
    if (comparacao==0) printf("S\n");
    else printf("N\n");
    
    return 0;
}