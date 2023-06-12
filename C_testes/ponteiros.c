#include <stdio.h>


int ponteiro1()
{
	int a;
	int b;
	int *ptr;

	a = 10;
	b = 20;
	*ptr = a;
	printf("%i", *ptr);
	return (ptr);
}


int	main(void)
{
	int x; // declarei uma variável. Ela ocupa um endereço na memória;
	int *ponteiro; // criei um ponteiro. Ele também ocupa um endereço na memória
	int *outroPonteiro;

	x = 10; // atribui um valor a variável. Ela ocupa o mesmo endereço, mas agora tem um valor;
	ponteiro = &x;
	outroPonteiro = x;

	printf("%i - Este é o valor da variável\n", x); // este é o valor da variável;
	printf("%i - Este é o endereço do ponteiro (ponteiro = &x)\n", ponteiro); // este é o endereço do ponteiro;
	printf("%i - Este é o valor da variável usando o ponteiro (*ponteiro)\n", *ponteiro); // usando o * antes da var, printa o VALOR do ponteiro;
	printf("%i - Dessa forma também pego o valor da variável pois outroPonteiro = x e não &x)\n\n", outroPonteiro); 
	ponteiro1();
	getchar();
	return(0);
}