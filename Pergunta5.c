#include <stdio.h>
#include <string.h>

int main()
{
char string[100];
int i, tamanho; 
printf("Digite uma string: "); 
fgets(string,100,stdin);
tamanho = strlen(string); 
printf("Sua string invertida: "); 
  for(i=tamanho; i>=0; i--) 
     {
       printf("%c" ,string[i]);
     } 
return 0;
}
