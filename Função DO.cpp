//Do-While
#include <stdlib.h> //declara��o das bibliotecas
#include <stdio.h> //declara��o das bibliotecas
#include <conio.h> //declara��o das bibliotecas
#include <math.h> //declara��o das bibliotecas
int main() // in�cio do programa
{
int numero1, numero2, resposta; //declara��o das vari�veis
do{ //fun��o fa�a a instru��o
printf("Informe um lado do quadrado:\n"); //imprima na tela uma informa��o
scanf("%d",&numero1); //leia a informa��o e salve na vari�vel
numero2=(numero1*numero1); //executa uma opera��o matem�tica
printf("\nA area do quadrado sera: %d\n\n", numero2);//imprime na tela uma informa��o
printf("deseja continuar?\n\npressione 1 para sim ou 2 para n�o\n\n");//imprime na tela uma informa��o
scanf("%d",&resposta);//leia a informa��o e salve na vari�vel
}
while (resposta!=2);//enquanto a condi��o n�o for verdadeira retorna para o in�cio da fun��o DO.
system("PAUSE");
return 0;
}
