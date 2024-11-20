/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:04:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/06 14:04:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function scans the initial n bytes of the memory area pointed
// to by s for the first instance of c. Both c and the bytes of the memory area
// pointed to by s are interpreted as unsigned char. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int c = -1;
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	char *d1 = (char *)memchr(tab, c, 100);
	char *d2 = (char *)ft_memchr(tab, c, 100);
	printf("memchr: %s\n", d1);
	printf("ft_memchr: %s\n", d2);
	return (0);
}
*/