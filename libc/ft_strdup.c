/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:39:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 16:51:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_len(s);
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