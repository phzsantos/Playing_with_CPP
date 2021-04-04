# Exercicio de Logica

**Numeros Primos**

Um amigo de escola me desafiou a fazer um programa para saber se um numero é primo ou não.

Numeros primos só são divisiveis por 1 e por eles mesmos.

**Logica usada para resolver esse exercicio:**

Basicamente eu fiz um loop, começa tentando dividir por 1, ai ele conta 1 divisor possivel, e continua dividindo ate o numero que foi passado, ele vai tentando dividir por todos os numeros ate chegar e dividir por ele mesmo.

No fim, se o numero tiver apenas 2 divisores, isso quer dizer que ele só dividiu por 1 e por ele mesmo, sendo assim é primo. Caso tenha mais que 2, ele conseguiu dividir por algum outro numero dentro do range (1 ate NUMERO PASSADO), então ele não é primo.

A chave para resolver esse exercicio é: Você só pode tentar dividir o numero passado pelo usuário ate o numero que ele te passou, ex: se ele te passou 500, você vai dividir ele ate 500, 500/1, 500/2, ... 500/498, 500/499, 500/500. Você você não pode tentar dividir ele por 501 ou mais...
