#include<stdio.h>
#include<stdlib.h>
main ()
{
	int n1,n2,soma;
	printf("Digite dois numeros:\n");
	scanf("%d %d",&n1,&n2);
	soma=(n1+n2);
	if (soma>10)
	printf("ERRO\n");
	else
	printf("O resultado da soma e:%d\n",soma);
	system("pause");
}
