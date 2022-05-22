#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	s1[5]; 
	char	s2[] = "tra bien";

	printf("%ld\n", ft_strlcpy(s1, s2, 5));
	printf("%s\n", s1);
}
