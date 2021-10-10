//Do-While
#include <stdlib.h> //declaração das bibliotecas
#include <stdio.h> //declaração das bibliotecas
#include <conio.h> //declaração das bibliotecas
#include <math.h> //declaração das bibliotecas
int main() // início do programa
{
int numero1, numero2, resposta; //declaração das variáveis
do{ //função faça a instrução
printf("Informe um lado do quadrado:\n"); //imprima na tela uma informação
scanf("%d",&numero1); //leia a informação e salve na variável
numero2=(numero1*numero1); //executa uma operação matemática
printf("\nA area do quadrado sera: %d\n\n", numero2);//imprime na tela uma informação
printf("deseja continuar?\n\npressione 1 para sim ou 2 para não\n\n");//imprime na tela uma informação
scanf("%d",&resposta);//leia a informação e salve na variável
}
while (resposta!=2);//enquanto a condição não for verdadeira retorna para o início da função DO.
system("PAUSE");
return 0;
}
