/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:39:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 08:29:33 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dup;

	i = 0;
	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *s = "This is 42 Perpignan.";
	char *dup1 = strdup(s);
	char *dup2 = ft_strdup(s);
	printf("strdup: %s\n", dup1);
	printf("ft_strdup: %s\n", dup2);
	free(dup1);
	free(dup2);
	return (0);
}
*/