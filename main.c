/*
Huxley
*/
#include <stdio.h>

int main()
{
	int ano_nascimento, ano_atual, idade;
	scanf("%i%i", &ano_nascimento, &ano_atual);
	idade = ano_atual - ano_nascimento;
	printf("%i",idade);
	return 0;
}