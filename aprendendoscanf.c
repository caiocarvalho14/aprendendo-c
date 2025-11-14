// aprendendo sobre a função scanf()
#include <stdio.h>
int main(){
	
//	definindo o valor inicial de idade
	int idade = 0;
	int mes = 0;
	int dia = 0;
	int ano = 0;
	
//	printando idade inicial
	printf("Valor inicial da idade: %d \n", idade);
	
//	mensagem antes do input
	printf("Digite sua idade: ");
	
//	recebendo o input do usuário, definindo como um inteiro e passando pra variavel "idade"
	scanf("%d", &idade);
	
//	printando idade recebida do usuário
	printf("Sua idade: %d \n", idade);
	
//	agora pedindo dia e mes
	printf("Insira o dia e mes (separados por espaco):");
	
//	aqui o scanf espera por dois valores separados por espaço e atribui o primeiro a variavel dia e o segundo a variavel mes
	scanf("%d %d", &dia, &mes);
	
//	aqui o printf espera por dois valores inteiros separados por espaço e eu passo os valores de dia e mes inseridos pelo usuario
	printf("Dia e mes: %d %d \n",dia ,mes);
	
// 	!!!	IDEAL:
//	definir scanf() para cada valor a ser registrado:
	
	printf("Insira sua idade:");
	scanf("%d", &idade);
	printf("Insira o ano:");
	scanf("%d", &ano);
	
	printf("Idade: %d, Ano: %d",idade,ano);
	
	
}
