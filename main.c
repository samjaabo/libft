#include "libft.h"
#include <stdio.h>

int main()
{
	char s[]="00bhjdh0jvh0k00vd00";
	char **r;
	printf("\n");
	r = ft_split(s, '0');
	printf(">%s<\n", r[1]);

	return 0;
}