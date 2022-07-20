#include <stdio.h>

//Calcula a sequência de Fibonacci
int Fibonacci(int tamanhoSequencia){
  if (tamanhoSequencia == 1 || tamanhoSequencia == 0)
    return tamanhoSequencia;
  else
    return Fibonacci(tamanhoSequencia - 2) + Fibonacci(tamanhoSequencia - 1);
}

//Verifica se o número está presente na sequência de Fibonacci
int PertenceFibonacci(int numeroBuscado){
  int argumentoFibonacci;
  int retornoFibonacci;

  argumentoFibonacci = 0;
  while (1 == 1){
    retornoFibonacci = Fibonacci(argumentoFibonacci);
    if (numeroBuscado == retornoFibonacci)
      return 1;
    else if(numeroBuscado < retornoFibonacci)
      return 0;
    argumentoFibonacci++;
  }
}

int main(void) {
  int procurar;

  printf("\nDigite um número: ");
  scanf("%d", &procurar);

  if(PertenceFibonacci(procurar) == 1)
    printf("\nO número %i está presente na sequência de Fibonacci", procurar);
  else
    printf("\nO número %i não está presente na sequência de Fibonacci", procurar);
  
  return 0;
}
