#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
void temp1()
{
	float paranox,para,nox;
	system ("CLS");
	system ("color 06");
	printf ("Adi\x87\xc6o\n");
	printf ("Digite o 1\xA7 valor da soma: ");
	scanf ("%f" ,&para);
	printf ("Digite o 2\xA7 valor da soma: ");
	scanf ("%f" ,&nox);
	paranox = (para+nox);
	printf ("O resultado da soma \x82: %0.2f\n" ,paranox);  
}
void temp2() 
{
	float lucas,andre,silva;
	system ("CLS");
	system ("color 26");
	printf ("Subtra\x87\xc6o\n");
	printf ("Digite o minuendo da subtra\x87\xc6o: ");
	scanf ("%f" ,&lucas);
	printf ("Digite o subtraendo da subtra\x87\xc6o: ");
	scanf ("%f" ,&andre);
	silva = (lucas-andre);
	printf ("O resultado da subtra\x87\xc6o \x82: %0.2f\n" ,silva);	
}
void temp3()
{
	float elisa,melogay,down;
	system ("CLS");
	system ("color 80");
	printf ("Multiplica\x87\xc6o\n");
	printf ("Digite o 1\xA7 valor da multiplica\x87\xc6o: ");
	scanf ("%f" ,&elisa);
	printf ("Digite o 2\xA7 valor da multiplica\x87\xc6o: ");
	scanf ("%f" ,&down);
	melogay = (elisa*down);
	printf ("O resultado da multiplica\x87\xc6o \x82: %0.2f\n" ,melogay);
}
void temp4()
{
	float fimosedupla,vaquinha,mococa;
	system ("CLS");
	system ("color 07");
	printf ("Divis\xc6o\n");
	printf ("Digite o dividendo da opera\x87\xc6o: ");
	scanf ("%f" ,&vaquinha);
	printf ("Digite o divisor da opera\x87\xc6o: ");
	scanf ("%f" ,&mococa);
	fimosedupla = (vaquinha/mococa);
	printf ("O quociente da opera\x87\xc6o \x82: %0.2f\n" ,fimosedupla);
}
void temp5()
{
	float lucas2,andre2,silva2;
	system ("CLS");
	system ("color 74");
	printf ("Raiz Quadrada\n"); //Não tem "í" na tabela ASCII, somente "ì" e "Í".
	printf ("Digite o valor para calcular a raiz quadrada: ");
	scanf ("%f" ,&lucas2);
	andre2 = sqrt(lucas2);
	printf ("A raiz quadrada do valor digitado \x82: %0.2f\n" ,andre2);
}
void temp6() 
{
	int dominou,melogay2,vavamito;
	system ("CLS");
	system ("color 91");
	printf ("Potencia\x87\xc6o\n");
	printf ("Digite a base da potencia\x87\xc6o: ");
	scanf ("%d" ,&dominou);
	printf ("Digite o expoente da potencia\x87\xc6o: ");
	scanf ("%d" ,&melogay2);
	vavamito = pow (dominou,melogay2);
	printf ("O resultado da potencia\x87\xc6o \x82: %d" ,vavamito);
}
void temp7()
{
	float lucas3,andre3,silva3;
	system ("CLS");
	system ("color 61");
	printf ("Convers\xc6o de Graus Fahrenheit para C\x82lcius\n");
	printf ("Digite o valor de Graus Fahrenheit: ");
	scanf ("%f" ,&lucas3);
	andre3 = (((lucas3-32)*5)/9);
	printf ("O valor em Graus C\x82lcius \x82: %0.2f\n" ,andre3);
}
void temp8()
{
	float LADS,LAS,BLBJJV;
	system ("CLS");
	system ("color 04");
	printf ("Convers\xc6o de Metros [M] para Dec\x83metro [Dam]\n");
	printf ("Digite o valor em Metros \x85 serem convertidos: ");
	scanf ("%f" ,&LADS);
	LAS = (LADS*10);
	printf ("O valor em Dec\x83metro \x82: %0.2f\n" ,LAS);
}
void temp9() // Float com "." e não ","
{
	float santos;
	char barcelona [33];
	system ("CLS");
	system ("color b3");
	printf ("Convers\xc6o de um valor Decimal para um valor Bin\xA0rio\n");
	printf ("Digite um valor decimal: ");
	scanf ("%f" ,&santos);
	itoa (santos,barcelona,2);
	printf ("O valor em Bin\xA0rio \x82: %s\n" ,barcelona);
}
void temp10() 
{
	float ALPHA; 
	char BETA [33];
	system ("CLS");
	system ("color 71");
	printf ("Convers\xc6o de um valor Decimal para um valor Hexadecimal\n");
	printf ("Digite um valor decimal: ");
	scanf ("%f" ,&ALPHA);
	itoa (ALPHA,BETA,16);
	printf ("O valor em Hexadecimal \x82: %s\n" ,BETA);
}
int main()
{
	char saida;
	int resposta;
	do{
		system ("CLS");
		system ("color 74");
		int escolha,adicao=1,subtracao=2,multiplicacao=3,divisao=4,raiz=5,potenciacao=6,graus=7,medidas=8,db=9,dh=10;
		printf ("Escolha a fun\x87\xc6o que deseja utilizar:\n");
		printf ("1. ADI\x80\xC7O\n");
		printf ("2. SUBTRA\x80\xC7O\n");
		printf ("3. MULTIPLICA\x80\xC7O\n");
		printf ("4. DIVIS\xC7O\n");
		printf ("5. RA\xD6Z QUADRADA\n"); //Não tem "í" na tabela ASCII, somente "ì" e "Í".
		printf ("6. POTENCIA\x8O\xC7O\n");
		printf ("7. CONVERS\xC7O DE GRAUS FAHRENHEIT PARA C\x90LCIUS\n");
		printf ("8. CONVERS\xC7O DE METROS [M] PARA DEC\xB6METRO [Dam]\n");
		printf ("9. CONVERS\xC7O DE UM VALOR DECIMAL PARA UM VALOR BIN\xB5RIO\n");
		printf ("10. CONVERS\xC7O DE UM VALOR DECIMAL PARA UM VALOR HEXADECIMAL\n");
		scanf ("%d" ,&escolha);
		switch (escolha){
			case 1:
				temp1();
			break;
			case 2:
				temp2();
			break;
			case 3:
				temp3();
			break;
			case 4:
				temp4();
			break;
			case 5:
				temp5();
			break;
			case 6:
				temp6();
			break;
			case 7:
				temp7();
			break;
			case 8:
				temp8();
			break;
			case 9:
				temp9();
			break;
			case 10:
				temp10();
			break;
			default:
				printf ("Op\x87\xc6o Inexistente\n");
			break;
				
		}
		printf ("\nClique [enter] para continuar ou [esc] para sair\n");
		saida = getch();
	}
	while (saida == 13 ); 
	system ("pause");
	return (0);	
}
