#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main ()
{
int A=1, B=2, C=3, D=4, E=5, lucas, idade, rios, df, LADS, resposta;
char andre [50], gabriel, cargo;
float salario, imposto, novosalario, ns, desconto, distancia, vt;
do{
printf ("Selecione a opcao desejada:\n");
printf ("1.A: Cadastrar Novo Funcionario\n 2.B: Calcular Imposto\n 3.C: Calcular Desconto - Faltas\n 4.D: Calcular Aumento de Salario - Cargo\n 5.E: Calcular Vale Transporte\n");
scanf ("%d" ,&lucas);
switch (lucas){
case 1:
printf ("Novo Funcionario\n");
printf ("Digite seu nome por favor:\n");
scanf ("%s" ,&andre);
printf ("Digite seu endereco por favor:\n");
scanf ("%s" ,&gabriel);
printf ("Digite sua idade por favor:\n");
scanf ("%d" ,&idade);
printf ("Digite seu cargo por favor:\n");
scanf ("%s" ,&cargo);
printf ("Digite seu salario por favor:\n");
scanf ("%f" ,&salario);
printf ("Parabens! Voce foi cadastrado com sucesso.");
break;
case 2:
printf ("Calcular Imposto\n");
printf ("Digite seu salario por favor:\n");
scanf ("%f" ,&salario);
if (salario<500){
imposto=salario*0.95;
printf ("O valor de seu salario com um imposto de 5 por cento eh de:%0.2f\n",imposto);
}
if (salario>500&&salario<1500){
imposto=(salario*0.90);
printf ("O valor de seu salario com um imposto de 10 por cento eh de:%0.2f\n",imposto);
}
if (salario>1500&&salario<2500){
imposto=(salario*0.85);
printf ("O valor de seu salario com um imposto de 15 por cento eh de:%0.2f\n",imposto);
}
if (salario>2500){
imposto=(salario*0.80);
printf ("O valor de seu salario com um imposto de 20 por cento eh de:%0.2f\n",imposto);
}
break;
case 3:
printf ("Calcular Descontos de Faltas\n");
printf ("Digite seu salario por favor:\n");
scanf ("%f" ,&salario);
printf ("Digite a quantidade de seus dias de trabalho:\n");
scanf ("%d" ,&rios);
printf ("Digite a quantidade de seus dias de falta:\n");
scanf ("%d" ,&df);
desconto=(df*2.5/100);
printf ("Seu salario tera um desconto de 2.5 por cento a cada dia de falta\n");
ns=(salario-desconto);
printf ("Seu novo salario eh:%0.2f\n" ,ns);
break;
case 4:
printf ("Calcular o Aumento de Salario de Acordo com o Cargo\n");
printf ("Digite seu salario por favor:\n");
scanf ("%f" ,&salario);
printf ("Escolha seu cargo:\n");
printf ("1: Operacional/Escritorio\n 2: Diretoria\n");
scanf ("%d" ,&LADS);
if (LADS==1){
printf ("Seu salario tera um aumento de 250 reais\n");
ns=(salario+250);
printf ("Seu novo salario eh:%0.2f\n" ,ns);
}
if (LADS==2){
printf ("Seu salario tera um aumento de 10 reais\n");
ns=(salario+10);
printf ("Seu novo salario eh:%0.2f\n" ,ns);
}
break;
case 5:
printf ("Calcular Vale Transporte\n");
printf ("Digite o valor de seu salario por favor:\n");
scanf ("%f" ,&salario);
printf ("Digite a distancia em quilometros de sua casa ate a empresa onde trabalha:\n");
scanf ("%f" ,&distancia);
if (distancia>=5){
printf ("Seu Vale Transporte tem o saldo de 6 por cento de seu salario\n");
vt=(salario*6/100);
printf ("O valor de seu Vale Transporte eh de:%0.2f\n" ,vt);
}
else{
printf ("Voce nao tem direito ao Vale Transporte\n");
}
break;
default:
printf("Opcao inexistente");
break;
}
printf ("Deseja retornar ao inicio do programa?:\n Pressione 1 para sim e 2 para nao\n");
scanf ("%d" ,&resposta);
}
while (resposta==1);
system ("pause");
return 0;
}
