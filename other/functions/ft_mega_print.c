#include <stdio.h>

void	ft_mega_print(char *input)
{
	int	i;

	i = 0;
	while(input[i])
	{
		if (input[i] < 32 || input[i] == 127)
			printf("\\%d\\", input[i]);
		else
			printf("%c", input[i]);
		i++;
	}
}
