#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
void temp()//sub rotina da função de temperatura
{
float c, f; //variaveis
printf ("Entre í com os graus em Fahrenheit: ");//escrita na tela
scanf ("%f", &f);//leitura do valor digitado
c=(((f-32)*5)/9);//operação de calculo
printf ("Os graus convertidos para Celsius s\xc6o: %f \n",c);//escrita na tela
}
int main(){ //inicia programa principal
char saida;//variaveis letras
do{// laço de repetição
system("CLS");//limpa tela
system("color e1");//modifica a cor da tela e da letra
temp();//chama sub-rotina
printf("\nEntre [enter] para continuar ou [esc] para sair\n");
saida = getch();//função getch especial para a leitura de caracteres da tabela ASCII
}
while (saida == 13 );// na tabela ASCII o numero 13 significa "enter"
system("pause");
}
