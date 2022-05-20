#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*str_src;
	char			*str_dst;
	unsigned int	i;
	
	str_src = src;
	str_dst = dst;
	i = 0;
	while (i < n)
	{
		*(str_dst + i) = *(str_src + i);
		i++;
	}
	return (dst);
}
