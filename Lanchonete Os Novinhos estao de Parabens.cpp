#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

void lanch1()
{
	float andre2,pcd,luga,troco;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	system ("color 64");
	printf ("      X-BURGER.....................R\x24 4.50\n");
	printf ("         BEBIDAS:..................VALOR:\n");
	printf ("  1. COCA-COLA.................R\x24 4.00\n");
	printf ("  2. KUAT......................R\x24 3.50\n");
	printf ("  3. PEPSI.....................R\x24 3.00\n");
	printf ("  4. SPRIT.....................R\x24 3.00\n");
	printf ("  5. FANTA.....................R\x24 3.00\n");
	printf ("  6. \xB5GUA MINERAL..............R\x24 2.00\n");
	printf ("  7. SUCO NATURAL..............R\x24 2.50\n");
	printf ("Por favor escolha sua bebida:\n");
	scanf ("%d" ,&gabriel2);
	switch (gabriel2){
		case 1:
			system ("CLS");
			system ("color 46");
			printf ("X-BURGER...............R\x24 4.50\n");
			printf ("COCA-COLA..............R\x24 4.00\n\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*4.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 2:
			system ("CLS");
			system ("color 56 ");
			printf ("X-BURGER...............R\x24 4.50\n");
			printf ("KUAT...................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;

		case 3:
			system ("CLS");
			system ("color b4");
			printf ("X-BURGER...............R\x24 4.50\n");
			printf ("PEPSI..................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 4:
			system ("CLS");
			system ("color 76");
			printf ("X-BURGER...............R\x24 4.50\n");
			printf ("SPRIT..................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 5:
			system ("CLS");
			system ("color e1");
			printf ("X-BURGER...............R\x24 4.50\n");
			printf ("FANTA..................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 6:
			system ("CLS");
			system ("color 46");
			printf ("X-BURGER.........................R\x24 4.50\n");
			printf ("\xB5GUA MINERAL..................R\x24 2.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*2.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 7:
			system ("CLS");
			system ("color 47");
			printf ("X-BURGER.........................R\x24 4.50\n");
			printf ("SUCO NATURAL.....................R\x24 2.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*4.50)+(qb*2.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
				
			
}
}
void lanch2()
{
	float andre2,pcd,luga,troco;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	system ("color 31");
	printf ("      X-SALADA.....................R\x24 5.00\n");
	printf ("         BEBIDAS:..................VALOR:\n");
	printf ("  1. COCA-COLA.................R\x24 4.00\n");
	printf ("  2. KUAT......................R\x24 3.50\n");
	printf ("  3. PEPSI.....................R\x24 3.00\n");
	printf ("  4. SPRIT.....................R\x24 3.00\n");
	printf ("  5. FANTA.....................R\x24 3.00\n");
	printf ("  6. \xB5GUA MINERAL..............R\x24 2.00\n");
	printf ("  7. SUCO NATURAL..............R\x24 2.50\n");
	printf ("Por favor escolha sua bebida:\n");
	scanf ("%d" ,&gabriel2);
	switch (gabriel2){
		case 1:
			system ("CLS");
			system ("color 78");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("COCA-COLA......................R\x24 4.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*4.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
		
		case 2:
			system ("CLS");
			system ("color 8c");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("KUAT...........................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 3:
			system ("CLS");
			system ("color 84");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("PEPSI..........................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
		
		case 4:
			system ("CLS");
			system ("color 56");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("SPRIT..........................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 5:
			system ("CLS");
			system ("color 81");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("FANTA..........................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 6:
			system ("CLS");
			system ("color 07");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("\xB5GUA MINERAL................R\x24 2.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*2.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 7:
			system ("CLS");
			system ("color 71");
			printf ("X-SALADA.......................R\x24 5.00\n");
			printf ("SUCO NATURAL...................R\x24 2.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*5.00)+(qb*2.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
	}
	
}
void lanch3()
{
	float andre2,pcd,luga,troco;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	system ("color e2");
	printf ("      X-SALADA DUPLO...............R\x24 6.00\n");
	printf ("         BEBIDAS:..................VALOR:\n");
	printf ("  1. COCA-COLA.................R\x24 4.00\n");
	printf ("  2. KUAT......................R\x24 3.50\n");
	printf ("  3. PEPSI.....................R\x24 3.00\n");
	printf ("  4. SPRIT.....................R\x24 3.00\n");
	printf ("  5. FANTA.....................R\x24 3.00\n");
	printf ("  6. \xB5GUA MINERAL..............R\x24 2.00\n");
	printf ("  7. SUCO NATURAL..............R\x24 2.50\n");
	printf ("Por favor escolha sua bebida:\n");
	scanf ("%d" ,&gabriel2);
	switch (gabriel2){
		case 1:
			system ("CLS");
			system ("color 64");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("COCA-COLA..................R\x24 4.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*4.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 2:
			system ("CLS");
			system ("color 78");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("KUAT.......................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 3:
			system ("CLS");
			system ("color 57");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("PEPSI......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 4:
			system ("CLS");
			system ("color 90");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("SPRIT......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}	
			break;
			
		case 5:
			system ("CLS");
			system ("color 48");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("FANTA......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 6:
			system ("CLS");
			system ("color 72");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("\xB5GUA MINERAL............R\x24 2.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*2.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 7:
			system ("CLS");
			system ("color 8c");
			printf ("X-SALADA DUPLO.............R\x24 6.00\n");
			printf ("SUCO NATURAL...............R\x24 2.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.00)+(qb*2.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
	}
}
void lanch4()
{
	float andre2,pcd,luga,troco;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	system ("color a5");
	printf ("      X-BACON......................R\x24 6.50\n");
	printf ("         BEBIDAS:..................VALOR:\n");
	printf ("  1. COCA-COLA.................R\x24 4.00\n");
	printf ("  2. KUAT......................R\x24 3.50\n");
	printf ("  3. PEPSI.....................R\x24 3.00\n");
	printf ("  4. SPRIT.....................R\x24 3.00\n");
	printf ("  5. FANTA.....................R\x24 3.00\n");
	printf ("  6. \xB5GUA MINERAL..............R\x24 2.00\n");
	printf ("  7. SUCO NATURAL..............R\x24 2.50\n");
	printf ("Por favor escolha sua bebida:\n");
	scanf ("%d" ,&gabriel2);
	switch (gabriel2){
		case 1:
			system ("CLS");
			system ("color 67");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("COCA-COLA..................R\x24 4.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*4.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 2:
			system ("CLS");
			system ("color 1f");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("KUAT.......................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 3:
			system ("CLS");
			system ("color 2f");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("PEPSI......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*3.00));
			system ("CLS");
		    printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
		    printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
		    break;
		    
		case 4:
			system ("CLS");
			system ("color a0");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("SPRIT......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}	
			break;
			
		case 5:
			system ("CLS");
			system ("color e0");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("FANTA......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 6:
			system ("CLS");
			system ("color c1");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("\xB5GUA MINERAL............R\x24 2.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*2.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 7:
			system ("CLS");
			system ("color 3a");
			printf ("X-BACON....................R\x24 6.50\n");
			printf ("SUCO NATURAL...............R\x24 2.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*6.50)+(qb*2.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
}
}
void lanch5()
{
	float andre2,pcd,luga,troco;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	system ("color a5");
	printf ("      X-FRANGO.....................R\x24 7.00\n");
	printf ("         BEBIDAS:..................VALOR:\n");
	printf ("  1. COCA-COLA.................R\x24 4.00\n");
	printf ("  2. KUAT......................R\x24 3.50\n");
	printf ("  3. PEPSI.....................R\x24 3.00\n");
	printf ("  4. SPRIT.....................R\x24 3.00\n");
	printf ("  5. FANTA.....................R\x24 3.00\n");
	printf ("  6. \xB5GUA MINERAL..............R\x24 2.00\n");
	printf ("  7. SUCO NATURAL..............R\x24 2.50\n");
	printf ("Por favor escolha sua bebida:\n");
	scanf ("%d" ,&gabriel2);
	switch (gabriel2){
		case 1:
			system ("CLS");
			system ("color 5a");
			printf ("X-FRANGO...................R\x24 7.00\n");
			printf ("COCA-COLA..................R\x24 4.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*4.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 2:
			system ("CLS");
			system ("color a0");
			printf ("X-FRANGO..................R\x24 7.00\n");
			printf ("KUAT......................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 3:
			system ("CLS");
			system ("color 80");
			printf ("X-FRANGO..................R\x24 7.00\n");
			printf ("PEPSI.....................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
			
		case 4:
			system ("CLS");
			system ("color b2");
			printf ("X-FRANGO..................R\x24 7.00\n");
			printf ("SPRIT.....................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 5:
			system ("CLS");
			system ("color 2b");
			printf ("X-FRANGO..................R\x24 7.00\n");
			printf ("FANTA.....................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 6:
			system ("CLS");
			system ("color ac");
			printf ("X-FRANGO..................R\x24 7.00\n");
			printf ("\xB5GUA MINERAL...........R\x24 2.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*2.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 7:
			system ("CLS");
			system ("color c4");
			printf ("X-FRANGO..................R\x24 7.00\n");
			printf ("SUCO NATURAL..............R\x24 2.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*7.00)+(qb*2.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
			
}	
}
void lanch6()
{
	float andre2,pcd,luga,troco;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	system ("color 67");
	printf ("      X-TUDO.......................R\x24 7.00\n");
	printf ("         BEBIDAS:..................VALOR:\n");
	printf ("  1. COCA-COLA.................R\x24 4.00\n");
	printf ("  2. KUAT......................R\x24 3.50\n");
	printf ("  3. PEPSI.....................R\x24 3.00\n");
	printf ("  4. SPRIT.....................R\x24 3.00\n");
	printf ("  5. FANTA.....................R\x24 3.00\n");
	printf ("  6. \xB5GUA MINERAL..............R\x24 2.00\n");
	printf ("  7. SUCO NATURAL..............R\x24 2.50\n");
	printf ("Por favor escolha sua bebida:\n");
	scanf ("%d" ,&gabriel2);
	switch (gabriel2){
		case 1:
			system ("CLS");
			system ("color 76");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("COCA-COLA..................R\x24 4.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*4.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 2:
			system ("CLS");
			system ("color 90");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("KUAT.......................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 3:
			system ("CLS");
			system ("color 81");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("PEPSI......................R\x24 3.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*3.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 4:
			system ("CLS");
			system ("color c7");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("SPRIT......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 5:
			system ("CLS");
			system ("color 1d");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("FANTA......................R\x24 3.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*3.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 6:
			system ("CLS");
			system ("color e2");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("\xB5GUA MINERAL............R\x24 2.00\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*2.00));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		case 7:
			system ("CLS");
			system ("color 27");
			printf ("X-TUDO.....................R\x24 8.50\n");
			printf ("SUCO NATURAL...............R\x24 2.50\n");
			printf ("Quantos lanches ir\xA0 comprar?\n");
			scanf ("%d" ,&ql);
			printf ("Quantos bebidas ir\xA0 comprar?\n");
			scanf ("%d" ,&qb);
			andre2 = ((ql*8.50)+(qb*2.50));
			system ("CLS");
			printf ("O valor de sua compra \x82: %0.2f\n\n" ,andre2);
			printf ("Qual ser\xA0 a forma de pagamento?:\n");
			printf ("1. Dinheiro.\n");
			printf ("2. Cart\xC6o da Lanchonete  [30 por cento de desconto].\n");
			printf ("3. Cart\xC6o.\n");
			scanf ("%d" ,&rios);
			if (rios==1){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
				printf ("Qual o valor em dinheiro que ir\xA0 pagar?\n");
				scanf ("%f" ,&luga);
				troco = (luga-andre2);
				printf ("Seu troco \x82: %0.2f\n" ,troco);
			}
			if (rios==2){
				pcd = (andre2*0.7);
				printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			}
			if (rios==3){
				printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			}	
			if (rios>=4){
				printf ("Op\x87\xc6o Inexistente\n");
			}
			break;
			
		default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
}
}
/*void lanch7()
{
	float andre2,pcd;
	int lucas2,gabriel2,ql,qb,rios;
	system ("CLS");
	printf ("Qual ser\xA0 a forma de pagamento?:\n");
	printf ("1. Dinheiro.\n");
	printf ("2. Cart\xC6o da Lanchonete (30% de desconto).");
	printf ("3. Cart\xC6o.");
	scanf ("%d" ,&rios);
	switch (rios){
		case 1:
			printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			break;
			
		case 2:
			pcd = (andre2*0.7);
			printf ("O valor de sua compra com desconto \x82: %0.2f\n" ,pcd);
			break;
			
		case 3:
			printf ("O valor de sua compra \x82: %0.2f\n" ,andre2);
			break;
			
		default:
			printf ("Op\x87\xc6o Inexistente\n");
			break;
	}
	
}*/

int main()
{
	char saida;
	int resposta,lucas;
	float gabriel,andre,rios;
	do{
	system ("CLS");
	system ("color 70");
	printf ("BEM-VINDO \xB7 LANCHONETE: OS NOVINHOS EST\xC7O DE PARAB\x90NS!\n\n");
	printf ("   LANCHES:................VALOR:\n"); 
	printf ("   1. X-BURGER.............R\x24 4.50\n");
	printf ("   2. X-SALADA.............R\x24 5.00\n");
	printf ("   3. X-SALADA DUPLO.......R\x24 6.00\n");
	printf ("   4. X-BACON..............R\x24 6.50\n");
	printf ("   5. X-FRANGO.............R\x24 7.00\n");
	printf ("   6. X-TUDO...............R\x24 8.50\n");
	printf ("Por favor escolha seu pedido:\n");
	scanf ("%d" ,&lucas);
	switch (lucas){
		case 1:
			lanch1();
			//lanch7();
		break;
		
		case 2:
			lanch2();
			//lanch7();
		break;
		
		case 3:
			lanch3();
			//lanch7();
		break;
		
		case 4:
			lanch4();
			//lanch7();
		break;
		
		case 5:
			lanch5();
			//lanch7();
		break;
			
		case 6:
			lanch6();
			//lanch7();
		break;
			
		default:
			printf ("Op\x87\xc6o Inexistente\n");
		break;
	}
		
		printf ("\n OBRIGADO PELA COMPRA E VOLTE SEMPRE!\n");
		printf ("\n Deseja comprar algo a mais?\n");
		printf ("Clique [Enter] para SIM ou clique [Esc] para N\xC7O\n");
		saida = getch();
	
}
		while (saida == 13 ); 
		system ("pause");
		return (0);	
}
