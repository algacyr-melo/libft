#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char		*buffer;	
	unsigned int	i;

	buffer = malloc(ft_strlen(s) + 1);
	i = 0;
	while (*(s + i))
	{
		*(buffer + i) = (*f) (i, *(s + i));	
		i++;	
	}
	return (buffer);
}
