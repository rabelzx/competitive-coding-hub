#include <stdio.h>
#include <math.h>

int main(void) {
  float valor;
  int cedulas = 0, moedas = 0;

  scanf("%f", &valor);

  printf("NOTAS:\n");

  cedulas = valor / 100;
  valor -= cedulas * 100;
  printf("%d nota(s) de R$ 100.00\n", cedulas);

  cedulas = valor / 50;
  valor -= cedulas * 50;
  printf("%d nota(s) de R$ 50.00\n", cedulas);

  cedulas = valor / 20;
  valor -= cedulas * 20;
  printf("%d nota(s) de R$ 20.00\n", cedulas);

  cedulas = valor / 10;
  valor -= cedulas * 10;
  printf("%d nota(s) de R$ 10.00\n", cedulas);

  cedulas = valor / 5;
  valor -= cedulas * 5;
  printf("%d nota(s) de R$ 5.00\n", cedulas);

  cedulas = valor / 2;
  valor -= cedulas * 2;
  printf("%d nota(s) de R$ 2.00\n", cedulas);


  // Converter o valor restante em centavos (moedas)
  int centavos = round(valor * 100);

  

  printf("MOEDAS:\n");

  moedas = centavos / 100;
  centavos -= moedas * 100;
  printf("%d moeda(s) de R$ 1.00\n", moedas);

  moedas = centavos / 50;
  centavos -= moedas * 50;
  printf("%d moeda(s) de R$ 0.50\n", moedas);

  moedas = centavos / 25;
  centavos -= moedas * 25;
  printf("%d moeda(s) de R$ 0.25\n", moedas);

  moedas = centavos / 10;
  centavos -= moedas * 10;
  printf("%d moeda(s) de R$ 0.10\n", moedas);

  moedas = centavos / 5;
  centavos -= moedas * 5;
  printf("%d moeda(s) de R$ 0.05\n", moedas);

  
  printf("%d moeda(s) de R$ 0.01\n", centavos);

  return 0;
}
