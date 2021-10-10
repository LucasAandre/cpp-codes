#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()
{

int Num,L1=1,L2=2,L3=3,L4=4;
printf ("Digite um numero inteiro entre 1 e 4:\n");
scanf ("%d" ,&Num);
switch (Num) {
case 1:
	printf ("O numero digitado foi:1\n");
	break;
	case 2:
	    printf ("O numero digitado foi:2\n");
	    break;
	case 3:
		printf ("O numero digitado foi:3\n");
		break;
	case 4:
		printf ("O numero digitado foi:4\n");
		break;
	default:
		printf ("Opcao inexistente\n");
		break;
	system ("pause");
}
}
	
	
