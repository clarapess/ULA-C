#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int numero;
int menu;

int main () 
{ setlocale (LC_ALL,"Portuguese"); 
int a;
int b;
int soma, sub, multi, di;
int op;

while(free){


printf ("\n\nUnidade Lógica e Aritmética: Menu Principal \n\n");

printf ("1- Definir registradores A \n");
printf ("2- Definir registradores B \n");
printf ("3- Ler registradores A \n");
printf ("4- Ler registradores B \n");
printf ("5- Ler registrador flag \n");
printf ("6- Definir operação \n");
printf ("7- Executar ULA \n");
printf ("8- Sair \n\n");
scanf ("%d", &numero);
switch (numero)
{		
		case 1:
			  system("cls");
			printf ("Insira o valor desejado para o registrador A:\n");
			scanf ("%d", &a);
			break;
			
		case 2:
			  system("cls");
			printf ("Insira o valor desejado para o registrador B:\n");
			scanf ("%d", &b);
			break;
						
			
		case 3:
			  system("cls");
			printf ("O valor inserido para o registrador A foi:\n");
			printf ("%d", a);
			break;
		
		case 4:
			  system("cls");
			printf ("\nO valor inserido para o registrador B foi:\n");
			printf ("%d", b);
			break;
			
		case 5:
			 system("cls");
			printf ("Leitura do registrador flags:\n");
		    printf ("______ OVERFLOW _______\n");
		    printf ("Valor do registrador A: %d\n", a);
		    printf ("Vlaor do registrador B: %d\n", b);
		    if ( a > 10 || b > 10 )
		    printf ("Overflow");
		    else
		    printf ("Sem Overflow");
		    printf ("\n\n");
		    printf ("_______ PARITY ________ \n");
		    printf ("Valor do registrador A: %d\n", a);
		    printf ("Vlaor do registrador B: %d\n", b);
		    if ( a % 2 == 0 && b % 2 == 1)
		    printf ("Verdadeiro!\n");
		    else
		    printf ("Falso!\n");
		    printf ("\n");		    
		    printf ("________ NEGATIVE _________\n");
		    printf ("Valor do registrador A: %d\n", a);
		    printf ("Vlaor do registrador B: %d\n", b);
		    if ( sub = b>a)
		    printf ("Resultado inapropriado!\n");
		    else 
		    printf ("Resultado apropriado!\n");
		    break;
		    
		
		case 6:
			 system("cls");
			printf ("Menu de Operações Lógicas e Aritméticas: \n\n");
			printf ("1- SOMA\n");
			printf ("2- SUBTRAÇÃO\n");
			printf ("3- MULTIPLICAÇÃO\n");
		    printf ("4- DIVISÃO\n");
		    printf ("5- OPERAÇÃO E\n");
		    printf ("6- OPERAÇÃO OU\n");
		    printf ("7- OPERAÇÃO NÃO\n");
		    printf ("8- OPERAÇÃO MENOR QUE\n");
		    printf ("\nDigite sua escolha e pressione ENTER\n");
		    scanf ("%d", &menu);
		    switch (menu){
		    	case 1:
		    		op=1;
		    		break;
		    	
		    	case 2:
		    		op=2;
		    		break;
		        
		        case 3:
		    		op=3;
		    		break;
		    	
		    	case 4:
		    		op=4;
		    		break;
		    		
		    	case 5:
		    		op=5;
		    		break;
		    		
		    	case 6:
		    		op=6;
		    		break;
		    		
		    	case 7:
		    		op=7;
		    		break;
		    	
		    	case 8:
		    		op=8;
		    		break;
			}
		    break;
			 				
			 
		case 7:
			system ("cls");
			printf ("Executando a ULA! \n\n");
			switch (op)
			{
				case 0:
					printf ("Você não escolheu nenhuma das operações disponíveis\n");
					system ("pause");
					system ("cls");
					break;
				
				case 1:
					printf ("_______ SOMA ________ \n");
		            printf ("Valor do registragor A: %d\n", a);
			        printf ("Valor do registragor B: %d\n", b);
			        soma = a + b;
			        printf ("Resultado da soma: %d + %d = %d \n\n", a,b,soma);
			        system ("pause");
			        system ("cls");
			        break;
			    
			    case 2:
			        printf ("_______ SUBTRAÇÃO ________ \n");
			        printf ("Valor do registragor A: %d\n", a);
			        printf ("Valor do registragor B: %d\n", b);
		        	sub = a - b;
			        printf ("Resultado da soma: %d - %d = %d \n\n", a,b,sub);
			        system ("pause");
			        system ("cls");
			        break;
			    	
			    case 3:
			    	printf ("_______ MULTIPLICAÇÃO ________ \n");
			        printf ("Valor do registragor A: %d\n", a);
			        printf ("Valor do registragor B: %d\n", b);
			        multi = a * b;
			        printf ("Resultado da soma: %d * %d = %d \n\n", a,b,multi);
			        system ("pause");
			        system ("cls");
			        break;
			        
			    case 4:
			    	printf ("_______ DIVISÃO ________ \n");
			    	printf ("Valor do registragor A: %d\n", a);
			    	printf ("Valor do registragor B: %d\n", b);
			    	di = a / b;
			    	printf ("Resultado da soma: %d / %d = %d \n\n", a,b,di);
			    	system ("pause");
			    	system ("cls");
			    	break;
			    	
			    case 5:
			    	printf ("_________ OPERAÇÃO E ________\n");
			    	printf ("Condições: A & B <= 10\n");
			    	printf ("Valor do registragor A: %d\n", a);
			    	printf ("Valor do registragor B: %d\n", b);
			    	 if ( a <= 10 &&  b <= 10)
			         printf ("Registradores Aprovados!\n\n");
			         else
			         printf ("Registradores Não Aprovados!\n\n");
			         system ("pause");
			         system ("cls");
			         break;
			         
			    case 6:
			    	printf ("_________ OPERAÇÃO OU ________\n");
			    	printf ("Condições: A <= 10 & B > 10\n");
			    	printf ("Valor do registragor A: %d\n", a);
			    	printf ("Valor do registragor B: %d\n", b);
			    	if ( a <= 10 ||  b > 10)
			        printf ("Registradores Aprovados!\n\n");
			        else
			        printf ("Registradores Não Aprovados!\n\n");
			        system ("pause");
			        system ("cls");
			        break;
			    	
			    case 7:
			    	printf ("_________ OPERAÇÃO NÃO ________\n");
		        	printf ("Condições: A <= 10 & B > 10\n");
			        printf ("Valor do registragor A: %d\n", a);
			        printf ("Valor do registragor B: %d\n", b);
			        if (!( a <= 10 ||  b > 10))
			        printf ("Registradores Aprovados!\n\n");
			        else
			        printf ("Registradores Não Aprovados!\n\n");
			        system ("pause");
			        system ("cls");
		         	break;
					
			}
			
			break;
			
		case 8:
			system ("cls");
			exit (8);
			printf ("Programa finalizado!");
			break;
	
	default:
	    printf ("Opção inválida! Tente novamente. \n\n");		
		}

		

}





    
return 0;
}


