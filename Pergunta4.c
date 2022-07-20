#include <stdio.h>

typedef struct{
char estado[6];
float faturamento;
} faturamentoEstadualMensal;

float CalcularPercentual(float faturamentoEstadual, float faturamentoTotal){
  faturamentoEstadual /= faturamentoTotal;
  
  return faturamentoEstadual * 100.0f;
}

int CalcularTotal(faturamentoEstadualMensal faturamentoMensal[], int tamanhoVetor){
  float faturamentoTotal = 0;
  
  for(int i = 0; i < 5; i++){
    faturamentoTotal += faturamentoMensal[i].faturamento;
  }

  for(int i = 0; i < 5; i++){
    float p = CalcularPercentual(faturamentoMensal[i].faturamento, faturamentoTotal);
    
    printf("\nPercentual de representação de %s: %.2f%%", faturamentoMensal[i].estado, p);
  }
   printf("\n\nTotal R$%.2f - 100%%",faturamentoTotal);
  return 0;
}

int main(void) {
  faturamentoEstadualMensal faturamentoMensal[] = { {"SP", 67836.43},
                                                    {"RJ", 36678.66}, 
                                                    {"MG", 29229.88}, 
                                                    {"ES", 27165.48},
                                                    {"Outros", 19849.53}
                                                  };
 
  int tamanhoVetor = sizeof(faturamentoMensal)/sizeof(faturamentoMensal[0]);
  CalcularTotal(faturamentoMensal, tamanhoVetor);
  
  return 0;
}
