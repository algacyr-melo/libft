#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
 	char	buffer[32] = "libft";
	char	buffer_ft[32] = "libft";
	printf("Original: %lu\n", strlcat(buffer, "42", 0));
    printf("ft: %lu\n", ft_strlcat(buffer_ft, "42", 0));
	printf("%s\n", buffer);
	printf("%s\n", buffer_ft);
}
