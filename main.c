#include "libft.h"
#include <stdio.h>

int main ()
{
	char *s1 = "See F your F return FF now FF";
	char *s2 = "FF";
	size_t max = ft_strlen(s1);
//	char c = 'c';
//	s = "Help me";
//	a = (char*)malloc(sizeof( ft_strlen(s));
	printf("%zu\n", max);
	printf("%s\n", strstr(s1, s2));
	printf("%s\n", ft_strstr(s1,s2)); 
	return (0);
}
