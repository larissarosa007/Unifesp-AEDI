#include <stdio.h>
#include <string.h>

/*Beecrowd 1238 Combinador
Recebe a quantidade de casos testes e cada caso teste
recebe duas strings (1 e 2). O programa retorna a
primeira letra da 1, a primeira da 2, a segunda da 1, a
segunda da 2 e assim por diante. Se uma das duas strings
for maior, as letras restantes sao adicionadas ao final.*/

int main(){
	
	int N=0;
	char st1[51],st2[51], st3[102];
	int tamst1=0, tamst2=0, igual=0;
	int i=0, j=0, k=0, m=0, p=0;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf("%s", st1);
		scanf("%s", st2);
		
		tamst1=strlen(st1);
		tamst2=strlen(st2);
		
		//se as duas strings forem do mesmo tamanho
		if(tamst1==tamst2){
			for(j=0; j<=(tamst1*2); j=j+2){
				st3[j]=st1[(j/2)];
			}
			
			for(k=1; k<=(tamst1*2); k=k+2){
				st3[k]=st2[((k-1)/2)];
			}
			
			printf("%s\n", st3);
		}
		
		//se a primeira for maior
		else if(tamst1>tamst2){
			//alternado ate o tamanho do dobro da segunda
			for(j=0; j<=(tamst2*2); j=j+2){
				st3[j]=st1[(j/2)];
			}
			
			for(k=1; k<=(tamst2*2); k=k+2){
				st3[k]=st2[((k-1)/2)];
			}
			
			//coloca o restante da primeira no final
			p=tamst2;
			for(m=(tamst2*2);m<=((tamst1+tamst2)+1);m++){
				st3[m]=st1[p];
				p++;
			}
		
			printf("%s\n", st3);
		}
		
		//se a segunda for maior
		else{
			//imprime alternado ate o tamanho do dobro da primeira
			for(j=0; j<=(tamst1*2); j=j+2){
				st3[j]=st1[(j/2)];
			}
			
			for(k=1; k<=(tamst1*2); k=k+2){
				st3[k]=st2[((k-1)/2)];
			}
			
			//coloca o restante da segunda no final
			p=tamst1;
			for(m=(tamst1*2);m<=((tamst1+tamst2)+1);m++){
				st3[m]=st2[p];
				p++;
			}
			
			printf("%s\n", st3);
		}
	}
	
	return 0;
}