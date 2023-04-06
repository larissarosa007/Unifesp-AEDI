#include <stdio.h>

/*Beecrowd 1002 Area do Circulo
Calcula a area do circulo com o valor do raio fornecido
pelo usuario.*/

int main(){
    
    double n=3.14159, raio=0.0, A=0.0;
    
    scanf("%lf", &raio);
    
    A=raio*raio;
    A=A*n;
    
    printf("A=%0.4lf\n", A);
    
    return 0;
}