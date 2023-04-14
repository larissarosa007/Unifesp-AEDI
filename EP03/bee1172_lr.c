#include <stdio.h>

/*Beecrowd 1172 Substituicao em Vetor I
Lê um vetor X[10] e substitui os valores nulos e negativos por 1.
Depois imprime o vetor completo.*/
 
int main(){
    
    int X[10];
    int i=0;
    
    for(i=0;i<10;i++){
        
        scanf("%d", &X[i]);
        
        if (X[i]<=0){
            X[i]=1;
        }
        
        printf("X[%d] = %d\n", i, X[i]);
    }
    
    return 0;
}