#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*strmapi;
	int		i;

	strmapi = ft_calloc(ft_strlen(s), sizeof(char));
	i = -1;
	while (s[++i])
		strmapi[i] = f(i, s[i]);
	return (strmapi);
}