#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define qtMAX 15 //quantidade máxima que o reservatório suporta

int main()
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentuação

	int c, qtM[1] = { 0 }, qtChuva[qtMAX] = { 0 }, qtGasto[qtMAX] = { 0 }, qtMes[qtMAX] = { 0 }; //variáveis do tipo inteiro

	//para usuário definir a capacidade máxima do reservatório:
	printf("Escolha a capacidade máxima do reservatório de água (entre 1mm e 15mm): ");
	scanf_s("%d", &qtM[0]);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado

	//condicional que abrange os possíveis valores inseridos:
	if ((qtM[0] >= 1) && (qtM[0] < 15))
	{
		printf("\nA capacidade máxima escolhida é: %dmm\n", qtM[0]);
	}
	else
	{
		if (qtM[0] <= 0)
		{
			printf("\nO reservatório não possui capacidade de armazenamento.\n");
			printf("A capacidade mínima é 1mm.\n");
			return 0;
		}
		else
		{
			if (qtM[0] == 15)
			{
				printf("\nO reservatório está com a quantidade máxima de água suportada: %dmm\n", qtM[0]);
			}
			else
			{
				printf("\nO limite de capacidade é 15mm.\n");
				return 0;
					
			}
		}
	}

	//para o usuário inserir qt de chuva e de gasto por mês
	for (int x = 1; x <= 12; x++)
	{
		switch (x)
		{
		case 1: //Janeiro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Janeiro: \n");
			scanf_s("%d", &qtChuva[0]);
			printf("Agora digite quantos milímetros de água foram gastos em Janeiro: \n");
			scanf_s("%d", &qtGasto[0]);
			qtMes[0] = qtChuva[0] - qtGasto[0]; //cálculo da qt total de água que sobrou no reservatório no mês
			
			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[0] >= 1) && (qtMes[0] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Janeiro é de: %dmm ***\n", qtMes[0]);
			}
			else 
			{
				if (qtMes[0] <= 0)
				{
					printf("\n*** O reservatório em Janeiro está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Janeiro está CHEIO. ***\n");
				}
			}
			break;
		case 2: //Fevereiro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Fevereiro: \n");
			scanf_s("%d", &qtChuva[1]);
			printf("Agora digite quantos milímetros de água foram gastos em Fevereiro: \n");
			scanf_s("%d", &qtGasto[1]);
			qtMes[1] = (qtMes[0] + qtChuva[1]) - qtGasto[1]; //qt total de água que sobrou no reservatório no mês
			
			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[1] >= 1) && (qtMes[1] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Fevereiro é de: %dmm ***\n", qtMes[1]);
			}
			else
			{
				if (qtMes[1] <= 0)
				{
					printf("\n*** O reservatório em Fevereiro está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Fevereiro está CHEIO. ***\n");
				}
			}
			break;
		case 3: //Março
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Março: \n");
			scanf_s("%d", &qtChuva[2]);
			printf("Agora digite quantos milímetros de água foram gastos em Março: \n");
			scanf_s("%d", &qtGasto[2]);
			qtMes[2] = (qtMes[1] + qtChuva[2]) - qtGasto[2]; //qt total de água que sobrou no reservatório no mês
			
			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[2] >= 1) && (qtMes[2] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Março é de: %dmm ***\n", qtMes[2]);
			}
			else
			{
				if (qtMes[2] <= 0)
				{
					printf("\n*** O reservatório em Março está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Março está CHEIO. ***\n");
				}
			}
			break;
		case 4: //Abril
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Abril: \n");
			scanf_s("%d", &qtChuva[3]);
			printf("Agora digite quantos milímetros de água foram gastos em Abril: \n");
			scanf_s("%d", &qtGasto[3]);
			qtMes[3] = (qtMes[2] + qtChuva[3]) - qtGasto[3]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[3] >= 1) && (qtMes[3] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Abril é de: %dmm ***\n", qtMes[3]);
			}
			else
			{
				if (qtMes[3] <= 0)
				{
					printf("\n*** O reservatório em Abril está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Abril está CHEIO. ***\n");
				}
			}
			break;
		case 5: //Maio
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Maio: \n");
			scanf_s("%d", &qtChuva[4]);
			printf("Agora digite quantos milímetros de água foram gastos em Maio: \n");
			scanf_s("%d", &qtGasto[4]);
			qtMes[4] = (qtMes[3] + qtChuva[4]) - qtGasto[4]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[4] >= 1) && (qtMes[4] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Maio é de: %dmm ***\n", qtMes[4]);
			}
			else
			{
				if (qtMes[4] <= 0)
				{
					printf("\n*** O reservatório em Maio está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Maio está CHEIO. ***\n");
				}
			}
			break;
		case 6: //Junho
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Junho: \n");
			scanf_s("%d", &qtChuva[5]);
			printf("Agora digite quantos milímetros de água foram gastos em Junho: \n");
			scanf_s("%d", &qtGasto[5]);
			qtMes[5] = (qtMes[4] + qtChuva[5]) - qtGasto[5]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[5] >= 1) && (qtMes[5] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Junho é de: %dmm ***\n", qtMes[5]);
			}
			else
			{
				if (qtMes[5] <= 0)
				{
					printf("\n*** O reservatório em Junho está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Junho está CHEIO. ***\n");
				}
			}
			break;
		case 7: //Julho
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Julho: \n");
			scanf_s("%d", &qtChuva[6]);
			printf("Agora digite quantos milímetros de água foram gastos em Julho: \n");
			scanf_s("%d", &qtGasto[6]);
			qtMes[6] = (qtMes[5] + qtChuva[6]) - qtGasto[6]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[6] >= 1) && (qtMes[6] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Julho é de: %dmm ***\n", qtMes[6]);
			}
			else
			{
				if (qtMes[6] <= 0)
				{
					printf("\n*** O reservatório em Julho está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Julho está CHEIO. ***\n");
				}
			}
			break;
		case 8: //Agosto
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Agosto: \n");
			scanf_s("%d", &qtChuva[7]);
			printf("Agora digite quantos milímetros de água foram gastos em Agosto: \n");
			scanf_s("%d", &qtGasto[7]);
			qtMes[7] = (qtMes[6] + qtChuva[7]) - qtGasto[7]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[7] >= 1) && (qtMes[7] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Agosto é de: %dmm ***\n", qtMes[7]);
			}
			else
			{
				if (qtMes[7] <= 0)
				{
					printf("\n*** O reservatório em Agosto está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Agosto está CHEIO. ***\n");
				}
			}
			break;
		case 9: //Setembro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Setembro: \n");
			scanf_s("%d", &qtChuva[8]);
			printf("Agora digite quantos milímetros de água foram gastos em Setembro: \n");
			scanf_s("%d", &qtGasto[8]);
			qtMes[8] = (qtMes[7] + qtChuva[8]) - qtGasto[8]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[8] >= 1) && (qtMes[8] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Setembro é de: %dmm ***\n", qtMes[8]);
			}
			else
			{
				if (qtMes[8] <= 0)
				{
					printf("\n*** O reservatório em Setembro está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Setembro está CHEIO. ***\n");
				}
			}
			break;
		case 10: //Outubro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Outubro: \n");
			scanf_s("%d", &qtChuva[9]);
			printf("Agora digite quantos milímetros de água foram gastos em Outubro: \n");
			scanf_s("%d", &qtGasto[9]);
			qtMes[9] = (qtMes[8] + qtChuva[9]) - qtGasto[9]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[9] >= 1) && (qtMes[9] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Outubro é de: %dmm ***\n", qtMes[9]);
			}
			else
			{
				if (qtMes[9] <= 0)
				{
					printf("\n*** O reservatório em Outubro está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Outubro está CHEIO. ***\n");
				}
			}
			break;
		case 11: //Novembro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Novembro: \n");
			scanf_s("%d", &qtChuva[10]);
			printf("Agora digite quantos milímetros de água foram gastos em Novembro: \n");
			scanf_s("%d", &qtGasto[10]);
			qtMes[10] = (qtMes[9] + qtChuva[10]) - qtGasto[10]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[10] >= 1) && (qtMes[10] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Novembro é de: %dmm ***\n", qtMes[10]);
			}
			else
			{
				if (qtMes[10] <= 0)
				{
					printf("\n*** O reservatório em Novembro está VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservatório em Novembro está CHEIO. ***\n");
				}
			}
			break;
		case 12: //Dezembro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos milímetros de chuva teve em Dezembro: \n");
			scanf_s("%d", &qtChuva[11]);
			printf("Agora digite quantos milímetros de água foram gastos em Dezembro: \n");
			scanf_s("%d", &qtGasto[11]);
			qtMes[11] = (qtMes[10] + qtChuva[11]) - qtGasto[11]; //qt total de água que sobrou no reservatório no mês

			//laço de repetição para imprimir na tela quanto sobrou de água no reservatório:
			if ((qtMes[11] >= 1) && (qtMes[11] < qtM[0]))
			{
				printf("\n*** A quantidade de água no reservatório em Dezembro é de: %dmm ***\n\n\n", qtMes[11]);
			}
			else
			{
				if (qtMes[11] <= 0)
				{
					printf("\n*** O reservatório em Dezembro está VAZIO. ***\n\n\n");
				}
				else
				{
					printf("\n*** O reservatório em Dezembro está CHEIO. ***\n\n\n");
				}
			}
			break;
		default:
			printf("\nOPÇÃO INVÁLIDA\n");
			break;
		}
	}

	system("pause");
	return 0;
}