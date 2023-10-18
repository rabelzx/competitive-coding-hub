#include <stdio.h>
 
int main() {
 
    
    float combustivel, distancia, velocidade; 
    scanf("%f %f", &distancia, &velocidade); 
    
    distancia = velocidade * distancia; 
    combustivel = distancia / 12; 
    
    printf("%0.3f\n", combustivel); 
 
    return 0;
}