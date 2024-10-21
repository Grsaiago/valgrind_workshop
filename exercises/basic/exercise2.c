// exercise 2
// esse exercício é sobre como pescar uma alocação sendo causada por
// uma lógica errada, pra mostrar que o erro não está necessariamente onde
// o valgrind chora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minha_strlen(const char *const ptr);

int main(void)
{
	char	*str;
	int	len;
	char	*original;

	original = "";
	len = minha_strlen(original);
	// if len is zero, then there's no reason to alloc anything (se o len for 0, não há motivo pra alocar nada)
	if (len == 0)
		return (0);
	str = calloc(sizeof(char), len + 1);
	memcpy(str, original, len);
	printf("A string copiada foi: [%s]\n", str);
	str[len - 1] = '\0';
	free(str);
	return (0);
}

int minha_strlen(const char *const ptr)
{
	int	idx;

	idx = 0;
	while (ptr[idx++]);

	return idx;
}
