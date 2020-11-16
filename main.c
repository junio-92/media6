#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include<stdio.h>

int n1, n2, n3, n4;
float media;


	// %i -> int 	// %f -> float	// %c -> char
	printf("Informe a nota 1: ");
	scanf("%i",&n1);

	printf("Informe a nota 2: ");
	scanf("%i",&n2);

	printf("Informe a nota 3: ");
	scanf("%i",&n3);

	printf("Informe a nota 4: ");
	scanf("%i",&n4);

	media = (n1+n2+n3+n4)/4;

	// \n serve para quebrar linha
	printf("\nA media e: %f\n\n", media);

	if (media >= 65){
		printf("Aluno APROVADO");
	}else{
		printf("Aluno REPROVADO");
	}


}
