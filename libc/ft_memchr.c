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

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	int c = '4';
normi		char s[] = "1234567";
	char *d1 = (char *)memchr(s, c, 7);
	char *d2 = (char *)ft_memchr(s, c, 7);
	printf("memchr: %s\n", d1);
	printf("ft_memchr: %s\n", d2);
	return (0);
}
*/