#include <stdio.h>
#include <math.h>

/*Beecrowd 1036 Fórmula de Bhaskara
Calcula as raizes de uma equacao de segundo grau usando
Bhaskara. Imprime as duas raizes com cinco digitos apos o
ponto ou a mensagem "Impossivel calcular".*/

int main(){

    double A=0, B=0, C=0, R1=0, R2=0, delta=0, denominador=0, rdelta=0;
    
	scanf("%lf %lf %lf", &A, &B, &C);
	
	delta=(B*B)-4*(A*C);
	denominador=2*A;
    
	if (delta<0 || denominador==0)
		printf("Impossivel calcular\n");
    
	else{
	    
		rdelta=sqrt(delta);
        
		R1=((-B)+rdelta)/denominador;
		
		R2=((-B)-rdelta)/denominador;
        
		printf("R1 = %0.5lf\nR2 = %0.5lf\n", R1, R2);
	}
	
    return 0;
}