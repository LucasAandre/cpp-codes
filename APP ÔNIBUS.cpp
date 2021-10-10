#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

void bus1()
{
	int escolha,passageiros;
	float conducaototal;
	system ("CLS");
	system ("color b5");
	printf ("CEMIT\x90RIO PERUS       8015\n\n");
	printf ("Hor\xA0rios de partida:\n");
	printf ("04:40 e \x85 cada 20 minutos at\x82 00:00\n\n");
	printf ("Deseja calcular o valor \x85 ser gasto em sua condu\x87\xC6o?\n"); 
	printf ("Se SIM clique 1, se N\xC7O clique 2\n");
	scanf ("%d" ,&escolha);
	if (escolha==1){
		system ("CLS");
		system ("color d5");
		printf ("A TARIFA DE CONDU\x80\xC7O DESSA LINHA \x90 DE R\x24 3.80 POR PASSAGEIRO\n\n");
		printf ("QUANTOS PASSAGEIROS EMBARCAR\xC7O NESSA VIAGEM?\n\n");
		scanf ("%d" ,&passageiros);
		conducaototal = (3.80*passageiros);
		printf ("O VALOR GASTO EM SUA VIAGEM SER\xB5 DE: %0.2f\n\n" ,conducaototal);
		printf ("OBRIGADO POR USAR NOSSO APP!\n\n");
	}
	if (escolha==2) {
		system ("CLS");
		system ("color 5d");
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha>=3) {
		system ("CLS");
		system ("color ca");
		printf ("OP\x80\xC7O INEXISTENTE\n");
	}
}

void bus2()
{
	int escolha,passageiros;
	float conducaototal;
	system ("CLS");
	system ("color 19");
	printf ("JD. LUCIANA              199\n\n");
	printf ("Hor\xA0rios de partida:\n");
	printf ("04:40 e \x85 cada 20 minutos at\x82 00:00\n\n");
	printf ("Deseja calcular o valor \x85 ser gasto em sua condu\x87\xC6o?\n");
	printf ("Se SIM clique 1, se N\xC7O clique 2\n");
	scanf ("%d" ,&escolha);
	if (escolha==1){
		system ("CLS");
		system ("color 69");
		printf ("A TARIFA DE CONDU\x80\xC7O DESSA LINHA \x90 DE R\x24 4.10 POR PASSAGEIRO\n");
		printf ("QUANTOS PASSAGEIROS EMBARCAR\xC7O NESSA VIAGEM?\n\n");
		scanf ("%d" ,&passageiros);
		conducaototal = (4.10*passageiros);
		printf ("O VALOR GASTO EM SUA VIAGEM SER\xB5 DE: %0.2f\n\n" ,conducaototal);
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha==2) {
		system ("CLS");
		system ("color e1");
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha>=3) {
		system ("CLS");
		system ("color 1e");
		printf ("OP\x80\xC7O INEXISTENTE\n");
	}
}

void bus3()
{
	int escolha,passageiros;
	float conducaototal;
	system ("CLS");
	system ("color 7a");
	printf ("LARANJEIRAS              198\n\n");
	printf ("Hor\xA0rios de partida:\n");
	printf ("04:40 e \x85 cada 20 minutos at\x82 00:00\n\n");
	printf ("Deseja calcular o valor \x85 ser gasto em sua condu\x87\xC6o?\n");
	printf ("Se SIM clique 1, se N\xC7O clique 2\n");
	scanf ("%d" ,&escolha);
	if (escolha==1){
		system ("CLS");
		system ("color ab");
		printf ("A TARIFA DE CONDU\x80\xC7O DESSA LINHA \x90 DE R\x24 4.00 POR PASSAGEIRO\n");
		printf ("QUANTOS PASSAGEIROS EMBARCAR\xC7O NESSA VIAGEM?\n\n");
		scanf ("%d" ,&passageiros);
		conducaototal = (4.00*passageiros);
		printf ("O VALOR GASTO EM SUA VIAGEM SER\xB5 DE: %0.2f\n\n" ,conducaototal);
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha==2) {
		system ("CLS");
		system ("color 13");
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha>=3) {
		system ("CLS");
		system ("color 31");
		printf ("OP\x80\xC7O INEXISTENTE\n");
	}
}

void bus4()
{
	int escolha,passageiros;
	float conducaototal;
	system ("CLS");
	system ("color 56");
	printf ("JD. NOVA ERA             813\n\n");
	printf ("Hor\xA0rios de partida:\n");
	printf ("04:40 e \x85 cada 20 minutos at\x82 00:00\n\n");
	printf ("Deseja calcular o valor \x85 ser gasto em sua condu\x87\xC6o?\n");
	printf ("Se SIM clique 1, se N\xC7O clique 2\n");
	scanf ("%d" ,&escolha);
	if (escolha==1){
		system ("CLS");
		system ("color a0");
		printf ("A TARIFA DE CONDU\x80\xC7O DESSA LINHA \x90 DE R\x24 3.10 POR PASSAGEIRO\n");
		printf ("QUANTOS PASSAGEIROS EMBARCAR\xC7O NESSA VIAGEM?\n\n");
		scanf ("%d" ,&passageiros);
		conducaototal = (3.10*passageiros);
		printf ("O VALOR GASTO EM SUA VIAGEM SER\xB5 DE: %0.2f\n\n" ,conducaototal);
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha==2) {
		system ("CLS");
		system ("color 0a");
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha>=3) {
		system ("CLS");
		system ("color b2");
		printf ("OP\x80\xC7O INEXISTENTE\n");
	}
}

void bus5()
{
	int escolha,passageiros;
	float conducaototal;
	system ("CLS");
	system ("color c8");
	printf ("MORRO DOCE               8014\n\n");
	printf ("Hor\xA0rios de partida:\n");
	printf ("04:40 e \x85 cada 20 minutos at\x82 00:00\n\n");
	printf ("Deseja calcular o valor \x85 ser gasto em sua condu\x87\xC6o?\n");
	printf ("Se SIM clique 1, se N\xC7O clique 2\n");
	scanf ("%d" ,&escolha);
	if (escolha==1){
		system ("CLS");
		system ("color 2b");
		printf ("A TARIFA DE CONDU\x80\xC7O DESSA LINHA \x90 DE R\x24 3.80 POR PASSAGEIRO\n");
		printf ("QUANTOS PASSAGEIROS EMBARCAR\xC7O NESSA VIAGEM?\n\n");
		scanf ("%d" ,&passageiros);
		conducaototal = (3.80*passageiros);
		printf ("O VALOR GASTO EM SUA VIAGEM SER\xB5 DE: %0.2f\n\n" ,conducaototal);
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha==2) {
		system ("CLS");
		system ("color 67");
		printf ("OBRIGADO POR USAR NOSSO APP!\n");
	}
	if (escolha>=3) {
		printf ("OP\x80\xC7O INEXISTENTE\n");
	}
}

int main ()
{
	char saida;
	int resposta,linha;
	
	do{
		system ("CLS");
		system ("color 90");
		printf ("APP DO \xE2NIBUS\n"); //Implementar um cadastro de usuário
		printf ("LINHAS EM SERVI\x80O:\n\n");
		printf ("1. CEMIT\x90RIO PERUS          8015\n");
		printf ("2. JD. LUCIANA              199\n");
		printf ("3. LARANJEIRAS              198\n");
		printf ("4. JD. NOVA ERA             813\n");
		printf ("5. MORRO DOCE               8014\n\n");
		printf ("Por favor escolha a linha que deseja utilizar:\n");
		scanf ("%d" ,&linha);
		switch (linha){
			case 1:
				bus1();
			break;
			
			case 2:
			 	bus2();
		    break;
			
			case 3:
				bus3();
			break;
			
			case 4:
				bus4();
			break;
			
			case 5:
				bus5();
			break;
			
			default:
				system ("CLS");
				system ("color 34");
				printf ("Op\x87\xc6o Inexistente\n");
			break;
		}
		
		printf ("\nDESEJA VOLTAR AO MENU PRINCIPAL?\n");
		printf ("Clique [Enter] para SIM ou clique [Esc] para N\xC7O\n");
		saida = getch();
		}
		while (saida == 13);
		system ("pause");
		return (0);
	}

