// aprendendo mais sobre o printf
#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("Aprendendo mais sobre o PRINTF \n");
	
//	%d especifica que o formato do valor é inteiro (10)
	printf("Valor Inteiro: %d \n",10);
	
//	%f especifica que o formato do valor é real (3.1415)
	printf("Valor Real %f \n", 3.14159265);
	
//	%.2f especifica que o formato do valor é real mas considera apenas 2 valores após o ponto (.2)
	printf("Valor Real com duas casas: %.2f \n", 3.1415);
	
//	%c especifica que o formato do valor é caractere único (a), cercado por aspas simples por ser unico ('a')
	printf("Imprimindo dado de texto unico %c \n", 'a');
	
//	%s especifica que o formato do texto é de vários caracteres ("Meu Texto")
	printf("Imprimindo dado de texto: %s \n", "Meu Texto");
}
