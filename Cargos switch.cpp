#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
	int lucas,andre,silva;
	printf ("Selecione o codigo correspondente ao seu cargo:\n");
	printf ("Codigo 1: Escrituario\n 2: Secretario\n 3: Caixa\n 4: Gerente\n 5: Diretor\n");
	scanf ("%d" ,&lucas);
	switch (lucas){
		case 1:
			printf ("Digite o seu salario:\n");
		scanf ("%d" ,&andre);
		silva=(andre*1.50);
		printf ("Seu cargo e Escrituario, seu aumento e de 50 por cento e seu salario somado com o aumento fica:%d\n" ,silva);
		break; 
		case 2:
			printf ("Digite o seu salario:\n");
		scanf ("%d" ,&andre);
		silva=(andre*1.35);
		printf ("Seu cargo e Secretario, seu aumento e de 35 por cento e seu salario somado com o aumento fica:%d\n" ,silva);
		break;
		case 3:
			printf ("Digite o seu salario:\n");
		scanf ("%d" ,&andre);
		silva=(andre*1.20);
		printf ("Seu cargo e Caixa, seu aumento e de 20 por cento e seu salario somado com o aumento fica:%d\n" ,silva);
		break;
		case 4:
			printf ("Digite o seu salario:\n");
		scanf ("%d" ,&andre);
		silva=(andre*1.10);
		printf ("Seu cargo e Gerente, seu aumento e de 10 por cento e seu salario somado com o aumento fica:%d\n" ,silva);
		break;
		case 5:
			printf ("Digite o seu salario:\n");
		scanf ("%d" ,&andre);
		printf ("Seu cargo e Diretor e nao tera aumento, seu salario e de:%d\n" ,andre);
		break;
		default:
			printf("Opcao inexistente");
	    	break;
	    system("pause");
	}
}
	
