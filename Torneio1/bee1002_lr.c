#include <stdio.h>
 
int main()
{
 
   double n=3.14159, raio=0.0, A=0.0;
   
   scanf("%lf", &raio);
   
   A=raio*raio;
   A=A*n;
   
   printf("A=%0.4lf\n", A);
 
    return 0;
}