//Carregar arquivo em uma variável
const jsonData= require('./diaValor.json')

var maiorValor = 0, menorValor = 0, diasSuperiores = 0

//Filtra e armazena dias válidos para o cálculo da média
const diasValidos = jsonData.filter(d => d.valor != 0)

//Realiza o cálculo da média considerando apenas dias válidos
const media = diasValidos.reduce((a, b) => a + b.valor, 0) / diasValidos.length

for (var i = 0; i < jsonData.length; i++) {
  //Busca maior valor
  if(jsonData[i].valor > maiorValor){
    maiorValor = jsonData[i].valor
  }
  //Busca menor valor
  if((jsonData[i].valor != 0 && jsonData[i].valor < menorValor) || menorValor == 0){
    menorValor = jsonData[i].valor
  }
  //Conta quantos dias tiveram faturamento superior
  if(jsonData[i].valor > media ){
    diasSuperiores++
  }
}

console.log("Maior valor de faturamento: R$", maiorValor)
console.log("Menor valor de faturamento (Sem faturamento zerado): R$", menorValor)
console.log("Número de dias de superiores à media mensal: ", diasSuperiores)