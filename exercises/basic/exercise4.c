// exercise 4
// Esse aqui eu vou pegar uma string, splittar e usar o split pra algo.
// vou limpar só o split, assim ele vai xiar da string vazada.
// Vou colocar um monte de call stack pra galera se acostumar com isso,
// além disso vou fazer a alocação estar longe de onde ela vaza, pra galera
// lembrar sempre que o vazamento não está onde o valor foi alocado.

#include <errno.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *str;
	char *original;

	if (argc != 2)
	{
		return  (-1);
		perror(strerror(EINVAL));
	}
	return (0);
}
