#include <stdio.h>

int main()
{
  int x;
  int y;
  int subtracao;
  int soma;
  float divisao;
  int multiplicacao;
//Executando a soma,subtracao,divisao e a multiplicacao  
  x = 5;
  y = 10;
  
  subtracao = x - y;
  soma = x + y;
  divisao = (float) x / y;
  multiplicacao = x * y;
  
  //Imprimir o resultado
  printf("\nResultado da subtracao = %d",subtracao);
  printf("\nResultado da soma = %d",soma);
  printf("\nResultado da divisao = %f\n",divisao);
  printf("\nResultado da multiplicacao = %d\n",multiplicacao);
    
  return 0;
}