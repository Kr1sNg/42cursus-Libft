/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:35:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/06 15:35:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: extract substring from string.
**
**	DESCRIPTION:
** 	Allocates (with malloc(3)) and returns a substring from the string ’s’.
** 	Substring begins at index (not char) ’start’ and is of maximum size ’len’.
**
**	RETURN VALUE:
**	The substring. Or NULL if the allocation fails.
*/

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*sub;

	slen = ft_strlen(s);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && start < slen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s = "This is 9.";
	unsigned int start = 1;
	unsigned int len = 6;
	char *sub = ft_substr(s, start, len);
	printf("ft_substr: %s\n", sub);
	free(sub);

	return (0);
}
*/