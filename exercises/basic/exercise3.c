// exercise 3
// Esse exercício ensina sobre 'invalid write' (escrita inválida).
// O objetivo é ver como uma escrita inválida acontece.
// Aqui ele não chora um invalid read porque o 'original' não está alocado na
// heap, e o valgrind só instrumentaliza a heap

#include <stdlib.h>

int main(void)
{
	int	original[] = { 10, 20, 30, 40, 50 };
	int	*copy;
	int	len;
	int	idx;
	int	temp;

	len = sizeof(original) / sizeof(int);
	copy = malloc(len);
	idx = 0;
	while (idx <= len)
	{
		temp = original[idx];
		copy[idx] = temp;
		idx++;
	}
	// do some wild computation with 'copy' (fazer alguma computação sinistra com o 'copy');
	return (0);
} 
