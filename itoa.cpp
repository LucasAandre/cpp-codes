// itoa exemplo
#include <stdio.h>
#include <stdlib.h>
/* itoa (variavel inteira- que ira ser convertida, variavel char - que vai receber a convers�o,base
-
base que ir� converter 10, 16, 2)*/
int main ()
{
int i; //variavel inteira
char n [33];// variavel character
printf ("Digite um numero: ");// exibe na tela a informa��o
scanf ("%d",&i);//leia a informa��o escrita
itoa (i,n,10);// converte o valor da variavel inteira para a base 10
printf ("decimal: %s\n",n);//exibe o valor da convers�o salva na varial n
itoa (i,n,16);// converte o valor da variavel inteira para a base 16
printf ("hexadecimal: %s\n",n);//exibe o valor da convers�o salva na varial n
itoa (i,n,2);// converte o valor da variavel inteira para a base 2
printf ("binario: %s\n",n);//exibe o valor da convers�o salva na varial n
system ("pause");
}
