#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	s1[32] = "bonjour";
	char	s2[] = "tra bien";

	printf("%ld\n", ft_strlcat(s1, s2, 4));
	printf("%s\n", s1);
}
