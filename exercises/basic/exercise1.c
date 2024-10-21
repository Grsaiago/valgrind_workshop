// exercise 1
// introdução básica ao valgrind

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char	*str;
	int	len;
	char	*original;

	original = "Uma string qualquer";
	len = strlen(original);
	str = calloc(sizeof(char), len + 1);
	memcpy(str, original, len);
	printf("A string copiada foi: [%s]\n", str);
	str[len - 1] = '\0';
	return (0);
}
