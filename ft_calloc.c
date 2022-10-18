#include "libft.h"

void	*ft_calloc(size_t len, size_t type_size)
{
	size_t	sz;
	void	*data;

	sz = len * type_size;
	data = malloc(sz);
	if (!data)
		return (NULL);
	(void)ft_bzero(data, sz);
	return (data);
}
