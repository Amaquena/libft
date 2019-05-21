#include "libft.h"
#include <stdio.h>

int main ()
{
	char *s;
	char *a = NULL;
	s = "Help me";
	a = (char*)malloc(sizeof( ft_strlen(s)));
	printf("%s", ft_strncpy(a, s, 10));
	return (0);
}
