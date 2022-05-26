#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'z';
	printf("INPUT: 'z'\t");
	printf("isalpha: %d\tft_isalpha: %d\t", isalpha(c), ft_isalpha(c));
	if (ft_isalpha(c) != 0)
		printf("OK!\n");
	c = 'Z';
	printf("INPUT: 'Z'\t");
	printf("isalpha: %d\tft_isalpha: %d\t", isalpha(c), ft_isalpha(c));
	if (ft_isalpha(c) != 0)
		printf("OK!\n");
	c = '0';
	printf("INPUT: '0'\t");
	printf("isalpha: %d\tft_isalpha: %d\t", isalpha(c), ft_isalpha(c));
	if (ft_isalpha(c) == isalpha(c))
		printf("OK!\n");
	c = '\0';
	printf("INPUT: '\\0'\t");
	printf("isalpha: %d\tft_isalpha: %d\t", isalpha(c), ft_isalpha(c));
	if (ft_isalpha(c) == isalpha(c))
		printf("OK!\n");
	c = '$';
	printf("INPUT: '$'\t");
	printf("isalpha: %d\tft_isalpha: %d\t", isalpha(c), ft_isalpha(c));
	if (ft_isalpha(c) == isalpha(c))
		printf("OK!\n");
	c = ' ';
	printf("INPUT: ' '\t");
	printf("isalpha: %d\tft_isalpha: %d\t", isalpha(c), ft_isalpha(c));
	if (ft_isalpha(c) == isalpha(c))
		printf("OK!\n");
	return (0);
}
