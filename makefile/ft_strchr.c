/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:29:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/05 15:14:47 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "This is 9";
	int	c = '9';
	printf("strchr: %s.\n", strchr(str, c));
	printf("ft_strchr: %s.\n", ft_strchr(str, c));
	return (0);
}
*/
